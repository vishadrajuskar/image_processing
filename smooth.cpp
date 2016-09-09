#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main (void)
{
	Mat src = imread ("../wallhaven-415645.jpg", CV_LOAD_IMAGE_COLOR);

	Mat dst1, dst2;

	GaussianBlur (src, dst1, Size(9,9), 0, 0);
	medianBlur (src, dst2, 9);


	namedWindow ("original", WINDOW_NORMAL);
	imshow ("original", src);

	namedWindow ("Gaussian Blur", WINDOW_NORMAL);
	imshow ("GaussianBlur", dst1);

	namedWindow ("median Blur", WINDOW_NORMAL);
	imshow ("median Blur", dst2);

	waitKey (0);
	exit (0);

	return 0;
}
