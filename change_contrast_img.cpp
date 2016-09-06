#include "opencv2/highgui/highgui.hpp"
#include <iostream>


using namespace cv;

using namespace std;

int main( int argc, const char** argv )

{

	Mat img = imread("../../wallhaven-415645.jpg", CV_LOAD_IMAGE_COLOR); //open and read the image


	if (img.empty())
	{
		cout << "Image cannot be loaded..!!" << endl;
		return -1;
	}

	Mat imgH;
	img.convertTo(imgH, -1, 2, 0); //increase the contrast (double)

	Mat imgL;
	img.convertTo(imgL, -1, 0.5, 0); //decrease the contrast (halve)

	//create windows
	namedWindow("Original Image", CV_WINDOW_NORMAL);
	namedWindow("High Contrast", CV_WINDOW_NORMAL);
	namedWindow("Low Contrast", CV_WINDOW_NORMAL);

	//show the image
	imshow("Original Image", img);
	imshow("High Contrast", imgH);
	imshow("Low Contrast", imgL);

	waitKey(0); //wait for key press

	destroyAllWindows(); //destroy all open windows

	return 0;
}

