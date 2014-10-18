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

class vertex {
	float coords [3]; // ALWAYS x y z
public:
	void set_coords(float x, float y, float z) {
		coords[0] = x;
		coords[1] = y;
		coords[2] = z;
	}
	float * get_coords() { return coords; }
};

class normal {
	float coords[3]; // ALWAYS x y z
public:
	void set_coords(float x, float y, float z) {
		coords[0] = x;
		coords[1] = y;
		coords[2] = z;
	}
	float * get_coords() { return coords; }
};

class facet {
	vertex points[3]; // ALWAYS a b c
public:
	void set_points(vertex a, vertex b, vertex c) {
		points[0] = a;
		points[1] = b;
		points[2] = c;
	}
	vertex * get_points() { return points; }
	vertex get_a() { return points[0]; }
};

class color {
	vector<facet> facets;
public:

};

void test()
{
	vertex v_a;
	v_a.set_coords(1, 2, 3);
	float *a = v_a.get_coords();
	cout << "vertex v_a => x is " << a[0] << ", y is " << a[1] << " and z is " << a[2] << endl;
	vertex v_b;
	v_b.set_coords(2, 4, 6);
	float *b = v_b.get_coords();
	cout << "vertex v_b => x is " << b[0] << ", y is " << b[1] << " and z is " << b[2] << endl;
	vertex v_c;
	v_c.set_coords(3, 6, 9);
	float *c = v_c.get_coords();
	cout << "vertex v_c => x is " << c[0] << ", y is " << c[1] << " and z is " << c[2] << endl;
	facet f_01;
	f_01.set_points(v_a, v_b, v_c);
	float f01ax = f_01.get_points()[0].get_coords()[0];
	float f01ay = f_01.get_points()[0].get_coords()[1];
	float f01az = f_01.get_points()[0].get_coords()[2];
	float f01bx = f_01.get_points()[1].get_coords()[0];
	float f01by = f_01.get_points()[1].get_coords()[1];
	float f01bz = f_01.get_points()[1].get_coords()[2];
	float f01cx = f_01.get_points()[2].get_coords()[0];
	float f01cy = f_01.get_points()[2].get_coords()[1];
	float f01cz = f_01.get_points()[2].get_coords()[2];
	cout << endl << "facet f_01:" << endl;
	cout << "a is at => " << f01ax << ", " << f01ay << ", " << f01az << endl;
	cout << "b is at => " << f01bx << ", " << f01by << ", " << f01bz << endl;
	cout << "c is at => " << f01cx << ", " << f01cy << ", " << f01cz << endl;
}

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
			cout << "Could not open file\n";
		else {
			string line;
			while (the_file.good()){ // good() returns true except for an eof or other error.
				getline (the_file , line);
				cout << line << endl;
			}
			test (); // insert some code testing...
		}
		// the_file is closed implicitly here
	}
	return 0;
}