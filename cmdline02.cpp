#include <iostream>
#include <unistd.h>			// Needed for sleep call.
using namespace std;

//***********************************************************************
// Program:	cmdline02.cpp
// Author:	S. Turner
// Date:	09/18/2022
// Compiler:	g++ (gcc), version 11.3.1
//
// This program extends cmdline01.cpp by adding some error checking
// for the command-line arguments. This can be useful when you want
// to ensure they type a certain number of arguments.
//***********************************************************************

int main(int argc, char *argv[]) {

  int i;			// Loop iterator variable.

//******************************************************************
// This is the command-line error checking.
// In this particular example, it forces you to type 3 arguments,
// which includes the name of the program executable.
//******************************************************************
  if (argc != 3) {
    cout << "Usage:  " << argv[0] << " (param1) (param2)" << endl;
    exit(1);
  }

  cout << "The number of arguments typed is " << argc << endl;
  cout << endl;

  cout << "The arguments typed were:  " << endl;
  for (i = 0; i < argc; i++)
    cout << "  argv[" << i << "]:  " << argv[i] << endl;

  return 0;
}
