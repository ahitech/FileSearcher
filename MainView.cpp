/*
 * Copyright 2020, Alex Hitech <ahitech@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#include "MainView.h"

#undef B_TRANSLATION_CONTEXT
#define B_TRANSLATION_CONTEXT "FileSearcherMainWindow"



MainView::MainView (BRect frame)
	: BView (frame, "main View",
			 B_FOLLOW_ALL_SIDES,
			 B_WILL_DRAW | B_NAVIGABLE)
{
	this->SetViewColor (ui_color(B_MENU_BACKGROUND_COLOR));
		
	BLayoutBuilder::Group<>(this, B_VERTICAL, 0)
		.AddGrid(B_HORIZONTAL, B_USE_ITEM_SPACING)
			.Add(m_PathToSearchLabel = new BStringView("Path label", 
											B_TRANSLATE("Path to search:")),
					0, 0)
			.Add(m_PathToSearch = new BTextControl(NULL, NULL,
					new BMessage(MSG_ADD_PATH)),
					1, 0)
			.Add(m_ChooseFolder = new BButton(B_TRANSLATE("Add folder to search"),
											  new BMessage(MSG_ADD_FOLDER)),
					2, 0)
			.Add(m_ContainingTextLabel = new BStringView("Containing text label",
											B_TRANSLATE("Containing text:")),
					0, 1)
			.Add(m_ContainingText = new BTextControl(NULL, NULL,
											new BMessage(MSG_ADD_TEXT)),
					1, 1)
			.Add(m_EnableRegEx = new BCheckBox(B_TRANSLATE("Enable Reg Expr"),
											new BMessage(MSG_EN_REGEXP)),
					2, 1)
			.Add(m_FilesNamesCriteriaLabel = new BStringView(
											"Filter on names label",
											B_TRANSLATE("Filter on names:")),
					0, 2)
			.Add(m_FilesNamesCriteria = new BTextControl(NULL, NULL,
											new BMessage(MSG_ADD_FILTER)),
					1, 2, 2, 1)
			.End()				
		.AddGlue()
		.SetInsets(B_USE_WINDOW_SPACING);

	
}


MainView::~MainView ()
{
	
}


void MainView::BuildFilesCriteriaUI()
{
	
	
}

void MainView::AttachedToWindow() 
{
   if ( Parent() )
      SetViewColor(Parent()->ViewColor());
   BView::AttachedToWindow();
}


void MainView::MessageReceived (BMessage* in)
{
	BView::MessageReceived(in);
}
