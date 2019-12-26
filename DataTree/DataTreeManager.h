//
//
//
#pragma once

#include <string>
#include "Global.h"
#include "DataFileParser.h"
#include "MyStringDataObject.h"

using namespace std;

class DataTreeManager
{
private:
	DataContent* _tree;

public:
	DataTreeManager(string);
	~DataTreeManager();
	bool Insert(MyStringDataObject* msdo);
	//MyStringDataObject Find(string);
	//bool Remove();
};