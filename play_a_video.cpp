#include "stdafx.h"
#include <iostream>
#include "opencv\cv.h"
#include "opencv\highgui.h"
#include "opencv\cxcore.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	cvNamedWindow( "Example2", CV_WINDOW_AUTOSIZE );
	CvCapture* capture = cvCreateFileCapture( "C:/ocv/Bhaag.avi" );
	IplImage* frame;
	while(1) {
		frame = cvQueryFrame( capture );
		if( !frame ) break;
		cvShowImage( "Example2", frame );
		char c = cvWaitKey(33);
		if( c == 27 ) break;
	}
	cvReleaseCapture( &capture );
	cvDestroyWindow( "Example2" );
	return 0;
}
