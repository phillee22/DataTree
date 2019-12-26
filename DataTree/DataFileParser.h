//
//
//
#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Global.h"
//#include "IDataObject.h"
#include "MyStringDataObject.h"

using namespace std;

class DataFileParser
{

public:
	//DataFileParser();

//	IDataObject* GetFileData(string);
	//string* GetFileData(string);
	int GetFileData(string**, string);
	//MyStringDataObject* GetFileData(string);

};