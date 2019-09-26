#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// OpenCV includes
#include "opencv2/core.hpp" 
#include "opencv2/highgui.hpp"
using namespace cv;


int main( int argc, const char** argv )
{
	// Read images
	Mat color = imread("../images/lena.jpg");
	Mat gray = imread("../images/lena.jpg", 0);
	
	// Write images to file
	imwrite("../images/lenaGray.jpg", gray);
	
	// Get same pixel with opencv function
	int myRow = color.cols-10;
	int myCol = color.rows-10;
	
	Vec3b pixel = color.at<Vec3b>(myRow, myCol);
	cout << "Pixel value (B,G,R): (" << (int)pixel[0] << "," << (int)pixel[1] << "," << (int)pixel[2] << ")" << endl;
	
	// Show images
	imshow("Lena BGR", color);
	imshow("Lena Gray", gray);

	// Wait for any key press
	waitKey(0);

	return 0;
}