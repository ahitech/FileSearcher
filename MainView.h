/*
 * Copyright 2020, Alex Hitech <ahitech@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include <Button.h>
#include <Catalog.h>
#include <CheckBox.h>
#include <File.h>
#include <LayoutBuilder.h>
#include <ListItem.h>
#include <OutlineListView.h>
#include <ScrollView.h>
#include <StringView.h>
#include <TabView.h>
#include <TextControl.h>
#include <View.h>


#include <SupportDefs.h>


const uint32	MSG_ADD_PATH 		= 'adpt';
const uint32	MSG_ADD_TEXT		= 'txts';
const uint32	MSG_EN_REGEXP		= 'enrx';
const uint32	MSG_ADD_FILTER		= 'fltr';
const uint32	MSG_ADD_FOLDER		= 'adfl';


class MainView :
	public BView
{
public:
	MainView (BRect);
	~MainView ();
	
	void AttachedToWindow();
	void MessageReceived(BMessage* in);
protected:
	BTextControl*	m_FilesNamesCriteria;

	BStringView*	m_PathToSearchLabel;
	BTextControl*	m_PathToSearch;
	BButton*		m_ChooseFolder;
	BStringView*	m_ContainingTextLabel;
	BTextControl*	m_ContainingText;
	BCheckBox*		m_EnableRegEx;
	BStringView*	m_FilesNamesCriteriaLabel;
	BScrollView*	m_ListOfFiles;
	BTabView*		m_InfoTabs;
	
	void	BuildFilesCriteriaUI();
};


#endif // SOURCE_VIEW_H
