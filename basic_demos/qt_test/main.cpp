#include "widget.h"
#include "form.h"
#include <QApplication>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    namedWindow("OpenCV", WINDOW_NORMAL);
    Mat image = imread("./scenery.jpg");

    if (image.empty()) {
        cout <<  "Could not open or find the image" << endl;
        return -1;
    }

    imshow("OpenCV", image);

    Widget w;
    w.show();

    Form f;
    f.show();

    return a.exec();
}
