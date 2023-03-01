////// Draw shapes and text ////////

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
    Mat img(512,512,CV_8UC3, Scalar(255,0,0));
    circle(img,Point(256,256),155,Scalar(0,69,255), FILLED);
    rectangle(img,Point(0,0),Point(100,100),Scalar(255,255,255),FILLED);
    imshow("circle",img);

    waitKey(0);

    return 0;
}