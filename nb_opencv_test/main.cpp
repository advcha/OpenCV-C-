/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: teddy
 *
 * Created on April 13, 2016, 10:04 AM
 */
//#include <opencv2/core/core.hpp>
//#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Mat img=imread("/home/teddy/opencv/samples/data/messi5.jpg",CV_LOAD_IMAGE_UNCHANGED);
    if(img.empty()){
        cout<<"Error: Image can't be opened. Check the path and the image is exist";
        return -1;
    }
    string winname="Show Image";
    namedWindow(winname,CV_WINDOW_AUTOSIZE);
    imshow(winname,img);
    
    waitKey(0);
    destroyWindow(winname);
        
    return 0;
}

