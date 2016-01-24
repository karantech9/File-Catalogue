#ifndef DISPLAY_H
#define DISPLAY_H
///////////////////////////////////////////////////////////////////////
// Display.h - display output on console			                 //
// ver 1.0                                                           //
// Language:    C++, Visual Studio 13.0						         //
// Platform:    Dell Inspiron 17, Windows 8                          //
// Application: Demonstration for CSE 687, Project #1, Spring 2015   //
// Author:      Karankumar Patel, Syracuse University                //
//              (315) 751-5637, khpatel@syr.edu                      //
///////////////////////////////////////////////////////////////////////
/*
* Module Operations:
* ------------------
* This Package used the data store to display various output based on 
* options given by user processed data of various file in order.
*/
/*
* Maintenance History:
* --------------------
* ver 1.0 : 10 Jan 2015
* - first release
*/
#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

class Display
{
public:
	void displayCommandLineArgument(const string& path, vector<string> patterns, vector<string> options, const string& text);
	void displayDuplicateFiles(map<string, set<string>> catalog);
	void displayFilesContainsText(map<string, set<string>> catalog, vector<string> fileContainsText, const string& text);
	void displayCatalogSummary(int files, int directories);
	void dispayRequirementOfS(map<string, set<string>> catalog);
};

#endif