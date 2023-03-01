#include <iostream>
#include <vector>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/xfeatures2d.hpp>
#include <opencv2/sfm/fundamental.hpp>

using namespace cv;
using namespace cv::xfeatures2d;
using namespace std;

int main()
{
    cv::Mat image = cv::imread("highwaysign.jpg");
    //auto detector = cv::xfeatures2d::SiftFeatureDetector::create();
    auto detector = cv::xfeatures2d::SurfFeatureDetector::create();

    std::vector<cv::KeyPoint>keypoints;
    detector->detect(image, keypoints);
    cv::Mat image_with_keypoints;
    cv::drawKeypoints(image, keypoints, image_with_keypoints);
    std::cout<<keypoints[0].pt.x<<endl;
    //auto extractor = cv::xfeatures2d::SiftDescriptorExtractor::create();
    auto extractor = cv::xfeatures2d::SurfDescriptorExtractor::create();
    cv::Mat descriptors;
    extractor->compute(image, keypoints, descriptors);
    cv::namedWindow("image with keypoints", cv::WINDOW_AUTOSIZE);
    cv::imshow("image with keypoints", image_with_keypoints);
    cv::namedWindow("Sift vector as image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Sift vector as image", descriptors);
    cv::waitKey(0);
    return 0;   
}