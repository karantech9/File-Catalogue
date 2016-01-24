#ifndef TEXTSEARCH_H
#define TEXTSEARCH_H
///////////////////////////////////////////////////////////////////////
// TextSearch.h - collect filename which contains search text        //
// ver 1.0                                                           //
// Language:    C++, Visual Studio 13.0						         //
// Platform:    Dell Inspiron 17, Windows 8                          //
// Application: Demonstration for CSE 687, Project #1, Spring 2015   //
// Author:      Karankumar Patel, Syracuse University                //
//              (315) 751-5637, khpatel@syr.edu                      //
///////////////////////////////////////////////////////////////////////
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

class TextSearch
{
public:
	vector<string> search(map<string, set<string>> catalog, const string& text);
	bool textSearch(const string& filePath, const string& text);
};
#endif