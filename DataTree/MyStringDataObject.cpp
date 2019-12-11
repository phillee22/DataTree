//
//
//

#include "MyStringDataObject.h"

using namespace std;

MyStringDataObject::MyStringDataObject(long key, string* str)
{
	//_data = line;
}

MyStringDataObject::~MyStringDataObject()
{
	//free(data);
}


bool MyStringDataObject::Empty()
{
	if (0 == _data) { return true; }
	else { return false; }
}


/*
string* MyStringDataObject::ToString()
{
	return (&data);
}
*/
