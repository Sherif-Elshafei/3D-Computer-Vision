#include <iostream> 
#include <string>   
#include <iomanip>  
#include <sstream>  
 
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

int main() {
    Mat image;
    Mat imgGray, imgBlurred, imgCanny, imgDilate, imgErode;

    image = imread("testImage.jpg");
    
    cvtColor(image, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(image, imgBlurred, Size(15,15), 2,2, 4);
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
    Canny(imgBlurred,imgCanny, 10, 150, 3, false);

    dilate(imgCanny, imgDilate, kernel);
    erode(imgDilate, imgErode, kernel);
    imshow("Canny", imgCanny);
    
    imshow("DISPLAY", image);
    imshow("Dilate", imgDilate);
    imshow("Erode", imgErode);

    waitKey(0);
    return 0;
}