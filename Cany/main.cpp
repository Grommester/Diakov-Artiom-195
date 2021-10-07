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
	string filename;//a666a.png
	cout <<"введите имя файла"<<endl;
	cin >> filename;
	
		
	while (filename != "a666a.png")
	{
			cout << "Попробуй занаво" << endl;
		cin >> filename;
		}
		
		
			cout << "Открыт файл ";
			cout << filename << endl;
			Mat img = imread(filename, 1);
			const char* source_window = "Исходное изображение";
			namedWindow(source_window, WINDOW_AUTOSIZE);
			imshow(source_window, img);
Mat src_gray;
Mat _img;
Mat canny_output;

cvtColor(img, src_gray, COLOR_RGB2GRAY); // перводит изображение в черно-белое
blur(src_gray, src_gray, Size(3, 3)); //размывает изображение
double otsu_thresh_val = threshold(src_gray,_img, 0, 255, THRESH_BINARY | THRESH_OTSU); //определяет яркость серого изображения
double high_thresh_val = otsu_thresh_val, lower_thresh_val = otsu_thresh_val * 0.5; //определяет максимумы и минимумы
cout << otsu_thresh_val;
Canny(src_gray, canny_output, lower_thresh_val, high_thresh_val, 3); // трехканальное изображение
const char* source_grey_window = "Серое изображение";
namedWindow(source_grey_window, WINDOW_AUTOSIZE);
imshow(source_grey_window, canny_output);
imwrite("canny_output.jpg", canny_output);  //сохраняет и открывает обработанное изображение


	
		waitKey(0);
		return(0);
}
