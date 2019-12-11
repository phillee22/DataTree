//
//
//
#pragma once

#include <string>
using namespace std;


class MyStringDataObject //: IDataObject
{
	string* _data;

public:
	long Key;
	MyStringDataObject();
	MyStringDataObject(long, string*);
	~MyStringDataObject();
	bool Empty();
	string* ToString();
};
