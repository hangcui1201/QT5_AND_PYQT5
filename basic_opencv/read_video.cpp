#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// OpenCV includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

// OpenCV command line parser functions
// Keys accecpted by command line parser
const char* keys =
{
	"{help h usage ? | | print this message}"
    "{@video | | Video file, if not defined try to use webcamera}"
};

int main( int argc, const char** argv )
{
	CommandLineParser parser(argc, argv, keys);

    parser.about("read_video");

    //If requires help show
    if (parser.has("help")) {
	    parser.printMessage();
	    return 0;
	}

	String videoFile = parser.get<String>(0);
	
	// Check if params are correctly parsed in his variables
	if (!parser.check()) {
	    parser.printErrors();
	    return 0;
	}

	VideoCapture cap; 
	if(videoFile != "")
		// Open video file
		cap.open(videoFile);
	else
		// Open /dev/video1 camera
		cap.open(1);

	// Check if we succeeded
    if(!cap.isOpened())  
        return -1;

    namedWindow("Video", 1);
    for(;;) {
        Mat frame;
        // Get a new frame from camera
        cap >> frame; 
        imshow("Video", frame);
        if(waitKey(30) >= 0) 
        	break;
    }

    // Release the camera or video cap
    cap.release();
	
	return 0;

}