#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>


//include opencv core
#include "opencv2\core\core.hpp"
#include "opencv2\core.hpp"
#include "opencv2\face.hpp"
#include "opencv2\highgui\highgui.hpp"
#include "opencv2\objdetect\objdetect.hpp"
#include "opencv2\opencv.hpp"
#include<direct.h>
#include "Lecture_c.h"
//file handling
#include <fstream>
#include <sstream>





static cv::CascadeClassifier face_cascade;
static std::string filename;
static std::string name;
static int filenumber = 0;

static void detectAndDisplay(cv::Mat frame)
{
	std::vector<cv::Rect> faces;
	cv::Mat frame_gray,crop,res,gray;
	std::string text;
	std::stringstream sstm;

	cvtColor(frame, frame_gray, cv::COLOR_BGR2GRAY);
	equalizeHist(frame_gray, frame_gray);

	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

	cv::Rect roi_b, roi_c;

	size_t ic = 0;
	int ac = 0;

	size_t ib = 0;
	int ab = 0;

	for (ic = 0; ic < faces.size(); ic++)

	{
		roi_c.x = faces[ic].x;
		roi_c.y = faces[ic].y;
		roi_c.width = (faces[ic].width);
		roi_c.height = (faces[ic].height);

		ac = roi_c.width * roi_c.height;

		roi_b.x = faces[ib].x;
		roi_b.y = faces[ib].y;
		roi_b.width = (faces[ib].width);
		roi_b.height = (faces[ib].height);


		crop = frame(roi_b);
		resize(crop, res, cv::Size(128, 128), 0, 0,cv::INTER_LINEAR);
		cvtColor(crop, gray,cv::COLOR_BGR2GRAY);
		std::stringstream ssfn;
		filename = "Faces\\";
		ssfn << filename.c_str() << name << filenumber << ".jpg";
		filename = ssfn.str();
		imwrite(filename, res);
		filenumber++;


		cv::Point pt1(faces[ic].x, faces[ic].y);
		cv::Point pt2((faces[ic].x + faces[ic].height), (faces[ic].y + faces[ic].width));
		rectangle(frame, pt1, pt2, cv::Scalar(0, 255, 0), 2, 8, 0);
	}


	sstm << "Crop area size: " << roi_b.width << "x" << roi_b.height << " Filename: " << filename;
	text = sstm.str();

	if (!crop.empty())
	{
		imshow("detected", crop);
	}
	else
		cv::destroyWindow("detected");
}

static void addFace(std::string sname)
{
	name = sname;
	cv::VideoCapture capture(0);

	if (!capture.isOpened())
		return;

	if (!face_cascade.load("haarcascade_frontalface_default.xml"))
	{
		std::cout << "error" << std::endl;
		return;
	};

	cv::Mat frame;
	std::cout << "\nCapturing your face 10 times, Press 'C' 10 times keeping your face front of the camera";
	char key;
	int i = 0;
	System::Windows::Forms::MessageBox::Show("Please remain still until pictures are taken", "Database Admin", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
	for (i=0;i<10;i++)
	{
		capture >> frame;
		detectAndDisplay(frame);
		int c = cv::waitKey(10);
		if (27 == char(c))
		{
			break;
		}
	}
	std::cout << "Face Added"<<std::endl;
	cv::destroyWindow("detected");
	return;
}


static void dbread(std::vector<cv::Mat>& images, std::vector<int>& labels) {
	std::vector<cv::String> fn;
	filename = "Faces\\";
	cv::glob(filename, fn, false);

	//glob("C:\\Users\\Asus\\Desktop\\Faces\\Ali\\*.jpg", fn, false);

	size_t count = fn.size();

	for (size_t i = 0; i < count; i++)
	{
		std::string itsname = "";
		char sep = '\\';
		size_t j = fn[i].rfind(sep, fn[i].length());
		if (j != std::string::npos)
		{
			itsname = (fn[i].substr(j + 1, fn[i].length() - j - 6));
		}
		images.push_back(cv::imread(fn[i], 0));
		labels.push_back(atoi(itsname.c_str()));
	}
}

static void eigenFaceTrainer() {
	std::vector<cv::Mat> images;
	std::vector<int> labels;
	dbread(images, labels);
	std::cout << "size of the images is " << images.size() << std::endl;
	std::cout << "size of the labels is " << labels.size() << std::endl;
	//create algorithm eigenface recognizer
	cv::Ptr<cv::face::EigenFaceRecognizer> model = cv::face::EigenFaceRecognizer::create();

	//train data
	model->train(images, labels);

	model->save("eigenface.yml");

	std::cout << "Training finished...." << std::endl;
	cv::waitKey(10000);
	cv::destroyWindow("detected");
}

static Lecture  FaceRecognition() {

	std::cout << "start recognizing..." << std::endl;
	Lecture lnew = Lecture();
	//load pre-trained data sets
	cv::Ptr<cv::face::FaceRecognizer>  model = cv::face::FisherFaceRecognizer::create();
	model->read("eigenface.yml");
	model->setThreshold(5050);
	int img_width = 128;
	int img_height = 128;


	//lbpcascades/lbpcascade_frontalface.xml

	std::string window = "Capture - face detection";

	if (!face_cascade.load("haarcascade_frontalface_default.xml")) {
		std::cout << " Error loading file" << std::endl;
		return lnew;
	}

	cv::VideoCapture cap(0);

	if (!cap.isOpened())
	{
		std::cout << "exit" << std::endl;
		return lnew;
	}
	cv::namedWindow(window, 1);
	long count = 0;
	std::string Pname = "";

	while (true)
	{
		std::vector<cv::Rect> faces;
		cv::Mat frame;
		cv::Mat graySacleFrame;
		cv::Mat original;

		cap >> frame;
		//cap.read(frame);
		count = count + 1;//count frames;

		if (!frame.empty()) {
			original = frame.clone();
			//convert image to gray scale and equalize
			cvtColor(original, graySacleFrame, cv::COLOR_BGR2GRAY);
			equalizeHist(graySacleFrame, graySacleFrame);

			//detect face in gray image
			face_cascade.detectMultiScale(graySacleFrame, faces, 1.1, 3, 0, cv::Size(90, 90));
			//number of faces detected
			//cout << faces.size() << " faces detected" << endl;
			std::string frameset = std::to_string(count);
			std::string faceset = std::to_string(faces.size());

			int width = 0, height = 0;

			//region of interest
			//cv::Rect roi;
			std::vector<int> lbl;
			for (int i = 0; i < faces.size(); i++)
			{
		
				cv::Rect face_i = faces[i];

				//crop the roi from grya image
				cv::Mat face = graySacleFrame(face_i);

				//resizing the cropped image to suit to database image sizes
				cv::Mat face_resized;
				cv::resize(face, face_resized, cv::Size(img_width, img_height), 1.0, 1.0, cv::INTER_CUBIC);

				//recognizing what faces detected
				int label = -1; double confidence = 0;
				model->predict(face_resized, label, confidence);

				std::cout << " confidence " << confidence << " Label: " << label << std::endl;
				lbl.push_back(label);
				Pname = std::to_string(label);

				//drawing green rectagle in recognize face
				rectangle(original, face_i, CV_RGB(0, 255, 0), 1);
				std::string text = Pname;

				int pos_x = std::max(face_i.tl().x - 10, 0);
				int pos_y = std::max(face_i.tl().y - 10, 0);

				//name the person who is in the image
				putText(original, text, cv::Point(pos_x, pos_y), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);

			}

			
			putText(original, "No. of Persons detected: " + std::to_string(faces.size()), cv::Point(30, 90), cv::FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
			//display to the winodw
			cv::imshow(window, original);

			lnew.update_student(lbl);
			
		}
		if (cv::waitKey(30) >= 0)
		{
			cv::destroyWindow(window);
			break;
		}
	}
	lnew.set_end_time(lnew.getcurtime());
	return lnew;
}
