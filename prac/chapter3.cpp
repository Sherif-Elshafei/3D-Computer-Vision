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
    Mat img, imgResize, imgCrop;
    img=imread("testImage.jpg");
    cout<<img.size()<<endl;
    resize(img,imgResize, Size(),1.25,1.25, 2);
    Rect roi(100,100,300,250);
    imgCrop = img(roi);
    imshow("display", img);
    imshow("Cropped",imgCrop);
    waitKey(0);
    return 0;
}