#include <iostream>
#include <unistd.h>			// Needed for sleep call.
using namespace std;

//***********************************************************************
// Program:	cmdline01.cpp
// Author:	S. Turner
// Date:	09/18/2022
// Compiler:	g++ (gcc), version 11.3.1
//
// This program is used to illustrate how to extract information from
// the command line.  The command line code should work in Visual Studio,
// Code::Blocks, Visual Studio Code, Unix, and Mac, although it was
// programmed in Fedora Linux using g++.
//***********************************************************************

int main(int argc, char *argv[]) {

  int i;			// Loop iterator variable.

  cout << "The number of arguments typed is " << argc << endl;
  cout << endl;

  cout << "The arguments typed were:  " << endl;
  for (i = 0; i < argc; i++)
    cout << "  argv[" << i << "]:  " << argv[i] << endl;

  return 0;
}
