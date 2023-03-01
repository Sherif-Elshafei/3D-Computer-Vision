#include <opencv2/opencv.hpp>
#include <opencv2/opencv_modules.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace cv;
using namespace eigen;

void onMouse(int evt, int x, int y, int flags, void* param) {
    if(evt == EVENT_LBUTTONDOWN) {
        cv::Point* ptPtr = (cv::Point*)param;
        ptPtr->x = x;
        ptPtr->y = y;
        cout<<x<<'\t'<<y<<endl;
    }
}

int main(int argc, char** argv) {
    cv::Point2i pt;
    int x,y;
    
    Mat frame = cv::imread(argv[1]);
    cv::namedWindow("Output Window");
    cv::setMouseCallback("Output Window", onMouse, &frame);
    cv::imshow("Output Window", frame);
    waitKey(0);
    return 0;
}
