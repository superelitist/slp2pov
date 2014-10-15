// slp2pov.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

// a change. from github.
class triangle {
	float x_coord, y_coord, z_coord;
	float x_normal, y_normal, z_normal;
public:
	void set_coords(float, float, float);
	float coords() { return x_coord, y_coord, z_coord; }
};

void triangle::set_coords(float x, float y, float z) {
	x_coord = x;
	y_coord = y;
	z_coord = z;
}


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Version 0.02\n";
	if (argc != 2) // argc should be 2 for correct execution
		cout << "usage: " << "slp2pov" << " <filename>\n"; // Original author recommended argv[0], but that outputs gibberish. I'm hardcoding this in lieu of a workaround.
	else {
		// We assume argv[1] is a filename to open
		ifstream the_file(argv[1]);
		// Always check to see if file opening succeeded
		if (!the_file.is_open())
			cout << "Could not open file\n";
		else {
			string line;
			while (the_file.good()){ // good() returns true except for an eof or other error.
				getline (the_file , line);
				cout << line << endl;
			}
		}
		// the_file is closed implicitly here
	}
	return 0;
}

/* 
TODO:
+ Finish the todo list. I'm too tired to do it now.
+ Define a class for colors, and a class for triangles.
+ Parse the input into an object for each color and triangle, ordered appropriately.
*/
