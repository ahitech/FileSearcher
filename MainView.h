/*
 * Copyright 2020, Alex Hitech <ahitech@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include <CheckBox.h>
#include <ListItem.h>
#include <OutlineListView.h>
#include <ScrollView.h>
#include <TabView.h>
#include <TextControl.h>
#include <View.h>

#include <SupportDefs.h>


class MainView :
	public BView
{
public:
	MainView (BRect);
	~MainView ();
	
	void AttachedToWindow();
protected:
	BTextControl*	m_PathToSearch;
	BButton*		m_ChooseFolder;
	BTextControl*	m_ContainingText;
	BCheckBox*		m_EnableRegEx;
	BScrollView*	m_ListOfFiles;
	BTabView*		m_InfoTabs;
	
	void	BuildListOfFilesUI();
};


#endif // SOURCE_VIEW_H
