#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;
int main()
{
	/*int height = 520;
	int widht = 840;
	Mat img(height, widht, CV_8UC3);
	Point textorg(100, img.rows / 2);
	int frontFace = FONT_HERSHEY_SCRIPT_SIMPLEX;
	double frontScale = 2;
	Scalar color(200, 100, 50);
	putText(img, "opencv step by step", textorg, frontFace, frontScale, color);
	namedWindow("hello worold", 0);
	imshow("hello world", img);
	waitKey(0);
	return 0;*/

	int height = 520;
	int widht = 840;
	Mat img(height, widht, CV_8UC3);
	Point textorg(100,img.rows/2);
	int frontFace = FONT_HERSHEY_TRIPLEX;
	double frontScale = 2;
	Scalar color(0, 200, 21);
	putText(img, "ZA IMPERATORA", textorg, frontFace, frontScale, color);
	namedWindow("hello worold", 0);
	imshow("hello world", img);
	waitKey(0);
	return 0;
}
