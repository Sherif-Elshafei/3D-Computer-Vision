#include <iostream>
#include "opencv2/core.hpp"
#ifdef HAVE_OPENCV_XFEATURES2D
#include "opencv2/highgui.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"

#include <opencv2/sfm/robust.hpp>
#include <opencv2/sfm.hpp>
#include <opencv2/sfm/reconstruct.hpp>

using namespace cv;
using namespace cv::xfeatures2d;
using namespace cv::sfm;

using std::cout;
using std::endl;
const char* keys =
    "{ help h |                                 | Print help message. }"
    "{ input1 | daySequence2--00070.jpg         | Path to input image 1. }"
    "{ input2 | daySequence2--00075.jpg         | Path to input image 2. }";
int main( int argc, char* argv[] )
{
    CommandLineParser parser( argc, argv, keys );
    Mat img1 = imread( samples::findFile( parser.get<String>("input1") ), IMREAD_GRAYSCALE );
    Mat img2 = imread( samples::findFile( parser.get<String>("input2") ), IMREAD_GRAYSCALE );
    if ( img1.empty() || img2.empty() )
    {
        cout << "Could not open or find the image!\n" << endl;
        parser.printMessage();
        return -1;
    }
    //-- Step 1: Detect the keypoints using SURF Detector, compute the descriptors
    int minHessian = 400;
    Ptr<SURF> detector = SURF::create( minHessian );
    std::vector<KeyPoint> keypoints1, keypoints2;
    Mat descriptors1, descriptors2;

    detector->detectAndCompute( img1, noArray(), keypoints1, descriptors1 );
    detector->detectAndCompute( img2, noArray(), keypoints2, descriptors2 );

    //-- Step 2: Matching descriptor vectors with a brute force matcher
    // Since SURF is a floating-point descriptor NORM_L2 is used
    Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create(DescriptorMatcher::BRUTEFORCE);
    std::vector< DMatch > matches;
    matcher->match( descriptors1, descriptors2, matches );

    std::vector<cv::Point2d> matchPoints_left, matchPoints_right;
    Mat F, inlier;

    for (int i = 0; i<matches.size(); i++) {
        float x = keypoints1[matches[i].queryIdx].pt.x;
        float y = keypoints1[matches[i].queryIdx].pt.y;
        matchPoints_left.push_back(cv::Point2f(x,y));
        x = keypoints2[matches[i].trainIdx].pt.x;
        y = keypoints2[matches[i].trainIdx].pt.y;
        matchPoints_right.push_back(cv::Point2f(x,y));
    }

   

    //double result = sfm::fundamentalFromCorrespondences8PointRobust(matchPoints_left, matchPoints_right, 2.0, F, inlier, 1e-3);

    waitKey();
    return 0;
}
#else
int main()
{
    std::cout << "This tutorial code needs the xfeatures2d contrib module to be run." << std::endl;
    return 0;
}
#endif