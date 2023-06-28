////// Color detection ////////

#include <iostream> 
#include <string>   
#include <iomanip>  
#include <sstream>  
 
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>  

using namespace cv;
using namespace std;

int main(){
    Mat img;
    img=imread("testImage.jpg");
    imshow("Original",img);
    waitKey(0);
    return 0;
}