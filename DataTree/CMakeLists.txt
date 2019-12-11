# CMakeList.txt : CMake project for DataTree, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable ( DataTree
    "DataTree.cpp" "DataTree.h"
	"DataContent.cpp" "DataContent.h"
	"DataFileParser.cpp" "DataFileParser.h"
	"DataTreeManager.cpp" "DataTreeManager.h"
	"Global.h"
	"IDataObject.cpp" "IDataObject.h"
	"MyStringDataObject.cpp" "MyStringDataObject.h"
)

# TODO: Add tests and install targets if needed.
