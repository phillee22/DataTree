//
//
//
#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Global.h"

using namespace std;

class DataFileParser
{
//	string x;

public:
	DataFileParser();
	int Foo();
	char* GetFileData(char* DataFilePath);
	string GetFileData(string DataFilePath);
};