//
//
//
#pragma once

#include <string>
#include "MyStringDataObject.h"

using namespace std;

class DataContent
{
private:

protected:
	//void* _data[SIZE];
	MyStringDataObject* _data[5];
	long _highkey;
	long _lowkey;

public:
	DataContent();
	bool Insert(MyStringDataObject*);
};