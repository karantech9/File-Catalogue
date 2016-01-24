#ifndef EXECUTIVE_H
#define EXECUTIVE_H
///////////////////////////////////////////////////////////////////////
// Executive.h - Manage all Packages of File Catalogue               //
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
* This Package first get a arguments from user and send to commandLineParser
* by which it got path, patterns, options and text. Further it passes
* data to FileManager to collect file catalogue, these collected file passed
* to Display for output.
*/
/*
* Maintenance History:
* --------------------
* ver 1.0 : 10 Jan 2015
* - first release
*/

#include<iostream>
#include<map>
#include<set>
using namespace std;

class Executive
{
public:
	void continuousTextSearch(const string& path, bool s);
	void textSearchMain(map<string, set<string>> catalog, const string& text);
};
#endif