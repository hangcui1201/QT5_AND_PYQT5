#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main(int, char** argv)
{
	// Create our writter
    FileStorage fs1("../params/params.yml", FileStorage::WRITE);
    
    // Save an int
    int fps = 5;
    fs1 << "fps" << fps;

    // Create some mat sample
    Mat m1 = Mat::eye(2,3 , CV_32F);
	Mat m2 = Mat::ones(3,2, CV_32F);
	Mat result= (m1+1).mul(m1+3);

	// Write the result
    fs1 << "Result" << result;

    // Release the file
    fs1.release();

    FileStorage fs2("../params/params.yml", FileStorage::READ);

    int f;
    fs2["fps"] >> f;
    cout << f << endl;
    
    Mat r;
    fs2["Result"] >> r;
    cout << r << endl;

    fs2.release();

    return 0;
}
