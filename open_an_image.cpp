#include "stdafx.h"
#include <iostream>
#include "opencv\cv.h"
#include "opencv\highgui.h"
#include "opencv\cxcore.h"
using namespace std;
int main()
{
	IplImage* img = cvLoadImage("C:/ocv/MIT.jpg" );
	cvNamedWindow("Example1", CV_WINDOW_AUTOSIZE );
	cvShowImage("Example1", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("Example1");
	return 0;
}
