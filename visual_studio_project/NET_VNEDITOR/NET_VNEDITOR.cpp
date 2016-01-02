// NET_VNEDITOR.cpp : main project file.

#include "stdafx.h"
#include "CDialog.h"
#include "ChoiceDialog.h"
#include "Form1.h"

using namespace NET_VNEDITOR;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	if(File::Exists(EPDIR+"\\-2.vnp"))
	{
		File::Delete(EPDIR+"\\-2.vnp");
	}
	return 0;
}
