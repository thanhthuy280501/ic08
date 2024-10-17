//****************************************************************************
// Program:	argsTest.cpp
// Author:	S. Turner
// Date:	10/05/22
//
// This program does three things:
// 1) demonstrates the use of command-line arguments to open files
// 2) uses the alternative syntax for file opening
// 3) Checks for failure to open.
//****************************************************************************
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

  //**********************************************************
  // The error checking making sure they typed the input file
  // and output file names on the command-line.
  //**********************************************************
  if (argc != 3) {
    cout << "usage:  " << argv[0] << " (input file name) (output file) name" << endl;
    exit(0);
  }

  ifstream inStream(argv[1]);
  if (inStream.fail( ))
  {
      cout << "Input file '" << argv[1] << "' opening failed.\n";
      exit(1);
  }

  ofstream outStream(argv[2]);
  if (outStream.fail( ))
  {
      cout << "Output file '" << argv[2] << "' opening failed.\n";
      exit(1);
  }


  inStream.close( );
  outStream.close( );

  return 0;
}

