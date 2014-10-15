// slp2pov.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string filename;
	if (argc != 2) // argc should be 2 for correct execution
		cout << "usage: " << "slp2pov" << " <filename>\n"; // Original author recommended argv[0], but that outputs gibberish. I'm hardcoding this in lieu of a workaround.
	else {
		// We assume argv[1] is a filename to open
		ifstream the_file(argv[1]);
		// Always check to see if file opening succeeded
		if (!the_file.is_open())
			cout << "Could not open file\n";
		else {
			char x;
			// the_file.get ( x ) returns false if the end of the file
			//  is reached or an error occurs
			while (the_file.get(x))
				cout << x;
		}
		// the_file is closed implicitly here
	}
	return 0;
}

