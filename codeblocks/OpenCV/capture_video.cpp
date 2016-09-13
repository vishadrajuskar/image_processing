#include "highgui.h"
int main( int argc, char** argv ) {
cvNamedWindow( "Video_Cap", CV_WINDOW_AUTOSIZE );

CvCapture* capture = cvCreateCameraCapture(0) ;
IplImage* frame;


while(1) {
frame = cvQueryFrame( capture );
if( !frame ) break;

cvShowImage( "Video_Cap", frame );
char c = cvWaitKey(33);
if( c == 27 ) break;

}
cvReleaseCapture( &capture );
cvDestroyWindow( "Video_Cap" );
}
