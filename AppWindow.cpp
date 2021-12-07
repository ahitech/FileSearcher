#include <stdio.h>
#include <Font.h>
#include <Rect.h>
#include <GroupLayout.h>
#include <String.h>


#include "MainView.h"
#include "Application.h"

AppWindow::AppWindow () :
	BWindow (BRect (100, 100, 900, 500),
			 "FileSearcher",
			 B_TITLED_WINDOW,
			 B_ASYNCHRONOUS_CONTROLS)
{
	BGroupLayout* layout = new BGroupLayout(B_VERTICAL);
	this->SetLayout (layout);
	mainMenuBar = new BMenuBar(Bounds(), "Main Menubar");
	layout->AddView(0, mainMenuBar);
	layout->SetInsets(0, 0, 0, 0);
	layout->SetSpacing(0);
	mainView = new MainView (Bounds());
	layout->AddView(mainView);
}


bool AppWindow::QuitRequested() {
	be_app->PostMessage(B_QUIT_REQUESTED);
	return BWindow::QuitRequested();
}


AppWindow::~AppWindow ()
{
	if (mainMenuBar) {
		mainMenuBar->RemoveSelf();
		delete mainMenuBar;
	}
	if (mainView) {
		mainView->RemoveSelf();
		delete mainView;
	}
	
}


void AppWindow::WindowActivated (bool active)
{
	BWindow::WindowActivated(active);
}


void AppWindow::MessageReceived (BMessage *in)
{
	BWindow::MessageReceived(in);
	switch (in->what)
	{
		case B_UNMAPPED_KEY_DOWN:
			break;
		case B_MODIFIERS_CHANGED:
			break;
	};
}
