#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main (int argc, char **argv)
{
	VideoCapture cap ("../How Linux is Built.mp4");

	if (!cap.isOpened ())
	{
		cout << "Cannot open video file" << endl;
		return -1;
	}
	//cap.set(CV_CAP_PROP_POS_MSEC, 300); //start the video at 300ms

	double fps = cap.get(CV_CAP_PROP_FPS); //get the frames per seconds of the video

	cout << "Frame per seconds : " << fps << endl;

	//namedWindow("MyVideo",CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"
	namedWindow("MyVideo",CV_WINDOW_NORMAL); //create a window called "MyVideo"

	while(1)
	{
		Mat frame;

		bool bSuccess = cap.read(frame); // read a new frame from video

		if (!bSuccess) //if not success, break loop
		{
			cout << "Cannot read the frame from video file" << endl;
			break;
		}

		imshow("MyVideo", frame); //show the frame in "MyVideo" window

		if(waitKey(30) == 27) //wait for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
		{
			cout << "esc key is pressed by user" << endl; 
			break; 
		}
	}

	return 0;
}
