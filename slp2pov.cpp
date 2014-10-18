// slp2pov.cpp : Defines the entry point for the console application.
//

/*
TODO:
+ Finish the todo list. I'm too tired to do it now. Still too tired.
+ Define a class for colors, and a class for triangles.
+ Parse the input into an object for each color and triangle, ordered appropriately.
*/

#include "stdafx.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Version 0.03\n";
	if (argc != 2) // argc should be 2 for correct execution
		cout << "usage: " << "slp2pov" << " <filename>\n"; // Original author recommended argv[0], but that outputs gibberish. I'm hardcoding this in lieu of a workaround.
	else {
		// We assume argv[1] is a filename to open
		ifstream the_file(argv[1]);
		// Always check to see if file opening succeeded
		if (!the_file.is_open())
			cout << "Could not open file" << endl;
		else {
			string line;
			int line_num = 0;
			if (the_file.good()){ // good() returns true except for an eof or other error.
				getline(the_file, line); // HOPING this always starts with the first line!
				line_num++;
				smatch match;
				regex e ("\\b(solid)([^ ]*)");
				if (!regex_search(line, match, e)){
					cout << "first line does NOT appear to be a solid, quitting..." << endl;
					return 1;
				}
				else {
					cout << "first line looks pretty solid..." << endl;
				}
				
			}
			while (the_file.good()){ // good() returns true except for an eof or other error.
				getline (the_file , line); // hoping this is now the second line.
				line_num++;

				//cout << line_num;
				cout << line << endl; // prints the line out. Will be removed at some point.
				// we need to figure out some basic things about the file, to make sure it is parsable.
				// is the first word in the file always "solid"?
				// 
			}
//			slp2pov_test (); // insert some code testing...

		}
		// the_file is closed implicitly here
	}
	return 0;
}