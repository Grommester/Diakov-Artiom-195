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
		
	
		waitKey(0);
		return(0);
}
