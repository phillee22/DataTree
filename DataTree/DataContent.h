//
//
//
#pragma once

#include "IDataObject.h"

class DataContent
{
	DataContent(int ID, IDataObject* Data);

public:
	long ID;
	IDataObject* Data;
};