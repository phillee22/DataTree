//
//
//
#pragma once

#include "Global.h"

using namespace std;

class IDataObject
{
	void* data = 0;

public:
	virtual ~IDataObject();
	virtual bool Empty() = 0;
	virtual string* ToString() = 0;
};