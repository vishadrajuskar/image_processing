#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main (int argc, char **argv)
{
	// create an Image (3 channels, 8 bit Image Depth, 
	// 500 hight, 1000 width, (0, 0, 100)) assigned for Blue, Green and Red
	Mat img (500, 1000, CV_8UC3, Scalar (0, 0, 100));

	if (img.empty ())
	{
		cout << "Error : Image cannot be loaded ..!!" << endl;
		system ("pause"); // wait for key press
		return -1;
	}
	namedWindow ("MyWindow", CV_WINDOW_NORMAL);
	imshow ("MyWindow", img);

	waitKey (0);

	destroyWindow ("MyWindow");

	return 0;
}
