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
Mat img;
int main()

{
	setlocale(LC_ALL, "Russian");
	char filename[80];//a666a.jpg
	cout <<"введите имя файла"<<endl;
	cin.getline(filename, 80);
	cout << "Открыт файл";
	cout << filename << endl;
	Mat img = imread(filename, 1);
	const char* source_window = "Исходное изображение";
	namedWindow(source_window, WINDOW_AUTOSIZE);
	imshow(source_window, img);
	waitKey(0);
	return(0);
}
