#include <iostream>
#include <vector>

#include <opencv2/opencv.hpp>
#include <opencv2/opencv_modules.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

#include <opencv2/videoio.hpp>

#include <opencv2/xfeatures2d.hpp>
#include <opencv2/sfm/fundamental.hpp>

#include <opencv2/sfm/numeric.hpp>
#include <opencv2/sfm/conditioning.hpp>

using namespace cv;
using namespace cv::xfeatures2d;
using namespace std;

int main()
{
    Matx<float,3,3> F, K1, K2, E;
    K1={1000,0,64,0,1000,64,0,0,1};
    K2={1000,0,64,0,1000,64,0,0,1};
    F = {1,0,1,3,2,1,0,5,4};
    cv::sfm::essentialFromFundamental(F, K1, K2, E);
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<E(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
