/*
 * Copyright 2020, Alex Hitech <ahitech@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "MainView.h"



MainView::MainView (BRect frame)
	: BView (frame, "main View",
			 B_FOLLOW_ALL_SIDES,
			 B_WILL_DRAW | B_NAVIGABLE)
{
	this->SetViewColor (ui_color(B_MENU_BACKGROUND_COLOR));
	
	m_PathToSearch = new BTextControl(BRect(10, 10), "Path");
	
	BuildListOfFilesUI();
	
	
}


MainView::~MainView ()
{
	
}


void MainView::BuildListOfFilesUI()
{
		
}

void MainView::AttachedToWindow() 
{
   if ( Parent() )
      SetViewColor(Parent()->ViewColor());
   BView::AttachedToWindow();
}
