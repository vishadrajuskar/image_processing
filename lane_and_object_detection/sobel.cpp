/**
 **SOBEL EDGE DETECTION:**

Edge points are where intensity difference between pixels is significant in an image.

There are many methods of detecting edges.
The majority methods may be grouped into these two categories:

i. Gradient: The gradient method detects the edge by looking for the maximum and minimum in the first derivative of the image.
For example, Roberts, Prewitt, Sobel where features detected have sharp edges.

ii. Laplacian: The Laplacian method searches for the zero crossings in the second derivative of the image to find edges
e.g. Marr-Hildreth, Laplacian of Gaussian, etc. An edge has one-dimensional shape of a ramp and calculating the derivative of the image can highlight its location.


 **/

#include "stdafx.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "iostream"
 
using namespace cv;
using namespace std;
 
int main( )
{
    Mat src1;
    src1 = imread("Penguins.jpg", CV_LOAD_IMAGE_COLOR);
    namedWindow( "Original image", CV_WINDOW_AUTOSIZE );
    imshow( "Original image", src1 );
 
    Mat grey;
    cvtColor(src1, grey, CV_BGR2GRAY);
 
    Mat sobelx;
    Sobel(grey, sobelx, CV_32F, 1, 0);
 
    double minVal, maxVal;
    minMaxLoc(sobelx, &minVal, &maxVal); //find minimum and maximum intensities
    cout << "minVal : " << minVal << endl << "maxVal : " << maxVal << endl;
 
    Mat draw;
    sobelx.convertTo(draw, CV_8U, 255.0/(maxVal - minVal), -minVal * 255.0/(maxVal - minVal));
 
    namedWindow("image", CV_WINDOW_AUTOSIZE);
    imshow("image", draw);
 
    waitKey(0);                                        
    return 0;
} 
