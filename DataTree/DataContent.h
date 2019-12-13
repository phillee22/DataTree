//
//
//
#pragma once

#include <string>
#include "MyStringDataObject.h"

using namespace std;

const int SIZE = 5;

class DataContent
{
private:
	void _Init();
	void _Refactor();
	//void Swap(MyStringDataObject*, MyStringDataObject*);

protected:
	//void* _data[SIZE];
	DataContent* _childcontent[5];
	MyStringDataObject* _data[5];
	long _highkey;
	long _lowkey;

public:
	DataContent();
	DataContent(MyStringDataObject*);
	void Insert(MyStringDataObject*);
};