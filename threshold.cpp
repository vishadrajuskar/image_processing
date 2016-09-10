#include "stdafx.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace cv;

// GLOBAL VARIABLES

int threshold_value = 0;
int threshold_type = 3;
int const max_value = 255;
int const max_type = 4;
int const max_BINARY_value = 255;

Mat src, src_gray, dst;
char *window_name = "Threshold Demo";

char *trackbar_type = "Type : \n 0 : BINARY \n 1 : BINARY INVERTED \ n 2 : TRUNCATE \n 3 : TO ZERO \n 4 : TO ZERO INVERTED";
char *trackbar_value = "Value";

// Function Heareds
void Threshold_Demo (int , void *);

/**
 *	@function	main
 **/

int main (int argc, char *argv[])
{
	// Load the image
	src = imread ("Penguins.jpg", 1);

	// Convert the image to gray
	cvtColor (src, src_gray, CV_BGR2GRAY, 0);

	// Create a window to display results
	namedWindow (window_name, CV_WINDOW_NORMAL);

	// Create a trackbar to choose type of thresshold
	createTrackbar (trackbar_type,
					window_name,
					&threshold_type,
					max_type,
					Threshold_Demo);
	createTrackbar (trackbar_value,
					window_name,
					&threshold_value,
					max_value,
					Threshold_Demo);

	// Call the function to initiate
	Threshold_Demo (0, 0);

	// Wait until user finishes program
	while (true) 
	{
		int c;
		c = waitKey (20);
		if ((char) c == 27)
		{
			break;
		}
	}
}

/**
 *	@function	Threshold_Demo
 **/

void Threshold_Demo (int , void *)
{
	/*
		0 : BINARY
		1 : BINARY INVERTED
		2 : TRUNCATE
		3 : THRESHOLD TO ZERO
		4 : THRESHOLD TO ZERO INVERTED
	*/
	threshold (src_gray, dst, threshold_value, max_BINARY_value, threshold_type);

	imshow (window_name, dst);
}
