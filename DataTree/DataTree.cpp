//
// DataTree.cpp : Defines the entry point for the application.
//

#include "DataTree.h"
#include "MyStringDataObject.h"

using namespace std;


int main()
{
	// get the data from the file...
	DataTreeManager dtm("c:\\users\\phillee\\source\\repos\\datatree\\datafile.txt");

	static string s("foo");
	static MyStringDataObject* strobj = new MyStringDataObject(23, &s);

	dtm.Insert(strobj);
/*
	// array has SIZE elements, but output if there's something
	int i = 0;
	while (!data[i].Empty() && i < SIZE)
	{
		cout << "data[" << i << "].ToString() = " << data[i].ToString() << endl;
		i++;
	}
*/

	return 0;
}
