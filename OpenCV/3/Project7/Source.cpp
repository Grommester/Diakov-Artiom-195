#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include "Source.h"

using namespace cv;
using namespace std;
Mat img;
int main()

{
	
	setlocale(LC_ALL, "Russian");
	string filename;//a666a.png
	cout <<"������� ��� �����"<<endl;
	cin >> filename;
	
		
	while (filename != "a666a.png")
	{
			cout << "�������� ������" << endl;
		cin >> filename;
		}
		
		
			cout << "������ ���� ";
			cout << filename << endl;
			Mat img = imread(filename, 1);
			const char* source_window = "�������� �����������";
			namedWindow(source_window, WINDOW_AUTOSIZE);
			imshow(source_window, img);
Mat src_gray;
Mat _img;
Mat canny_output;

cvtColor(img, src_gray, COLOR_RGB2GRAY); // �������� ����������� � �����-�����
blur(src_gray, src_gray, Size(3, 3)); //��������� �����������
double otsu_thresh_val = threshold(src_gray,_img, 0, 255, THRESH_BINARY | THRESH_OTSU); //���������� ������� ������ �����������
//double high_thresh_val = otsu_thresh_val, lower_thresh_val = otsu_thresh_val * 0.5; //���������� ��������� � �������� ��������
double high_thresh_val = 200, lower_thresh_val = 200 * 0.5;//������ ���-�� ��������
cout <<"��������� ����������" << otsu_thresh_val; //106
Canny(src_gray, canny_output, lower_thresh_val, high_thresh_val, 3); // ������������� �����������
const char* source_grey_window = "����� �����������";
namedWindow(source_grey_window, WINDOW_AUTOSIZE);
imshow(source_grey_window, canny_output);
imwrite("canny_output.jpg", canny_output);  //��������� � ��������� ������������ �����������

RNG rng(12345);
vector<vector<Point>>contours;
vector<Vec4i>hierarchy;
findContours(canny_output, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));
vector<Moments> mu(contours.size());
for (int i = 0; i < contours.size(); i++)
{
	mu[i] = moments(contours[i], false);
}
vector<Point2f>mc(contours.size());
for (int i = 0; i < contours.size(); i++)
{
	mc[i] = Point2f(mu[i].m10 / mu[i].m00, mu[i].m01 / mu[i].m00);


}
for(int i=0;i<contours.size();i++)
{
	printf("������ � %d: ����� ��� - x= %2f y=%2f; �����-%2f /n", i, mu[i].m10 / mu[i].m00, mu[i].m01 / mu[i].m00, arcLength(contours[i], true));
}
Mat drawing = Mat::zeros(canny_output.size(), CV_8UC3); 
for (int i = 0; i <contours.size(); i++)

{
	Scalar color = Scalar(rng.uniform(0, 255), rng.uniform(200, 255), rng.uniform(200, 255)); //�������� ������ �������
	drawContours(drawing, contours, i, color, 2, 8, hierarchy, 0, Point());
	circle(drawing, mc[i], 4, color, -1, 5, 0);

}
namedWindow("�������", WINDOW_AUTOSIZE);
imwrite("��������.jpg", drawing);
imshow("�������", drawing);
		waitKey(0);
		return(0);
	



//	/*int height = 520;
//	int widht = 840;
//	Mat img(height, widht, CV_8UC3);
//	Point textorg(100, img.rows / 2);
//	int frontFace = FONT_HERSHEY_SCRIPT_SIMPLEX;
//	double frontScale = 2;
//	Scalar color(200, 100, 50);
//	putText(img, "opencv step by step", textorg, frontFace, frontScale, color);
//	namedWindow("hello worold", 0);
//	imshow("hello world", img);
//	waitKey(0);
//	return 0;*/
//
//	int height = 520;
//	int widht = 840;
//	Mat img(height, widht, CV_8UC3);
//	Point textorg(100,img.rows/2);
//	int frontFace = FONT_HERSHEY_TRIPLEX;
//	double frontScale = 2;
//	Scalar color(0, 200, 21);
//	putText(img, "ZA IMPERATORA", textorg, frontFace, frontScale, color);
//	namedWindow("hello worold", 0);
//	imshow("hello world", img);
//	waitKey(0);
//	return 0;
}