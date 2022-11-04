#include "mainform.h"
using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	facedetect::mainform form;
	Application::Run(% form);
}
