// DataTree.cpp : Defines the entry point for the application.
//
#include <iostream>
#include <fstream>

#include "DataTree.h"
#include "DataFileParser.h"
#include "Global.h"

using namespace std;

int main()
{
	int i = 0;
	string s("string");

	DataFileParser dfp;
	i = dfp.Foo();
	cout << "dfp value is " << i << endl;
	string s2 = dfp.GetFileData(s);
	cout << "GetFileData returned:  " << s2 << endl;

	char* c2 = dfp.GetFileData("bar");
	cout << "GetFileData returned:  " << c2 << endl;

	cout << "Please enter an integer ID: ";
	cin >> i;
	cout << "The value you entered is " << i << endl;

	cout << "Please enter a char string value: ";
	cin >> s;
	cout << "The value you entered is " << s << endl;
	return 0;
}
