#include "stdafx.h"

void test()
{
	vertex v_a;
	v_a.set_coords(1, 2, 3);
	float *a = v_a.get_coords();
	std::cout << "vertex v_a => x is " << a[0] << ", y is " << a[1] << " and z is " << a[2] << std::endl;
	vertex v_b;
	v_b.set_coords(2, 4, 6);
	float *b = v_b.get_coords();
	std::cout << "vertex v_b => x is " << b[0] << ", y is " << b[1] << " and z is " << b[2] << std::endl;
	vertex v_c;
	v_c.set_coords(3, 6, 9);
	float *c = v_c.get_coords();
	std::cout << "vertex v_c => x is " << c[0] << ", y is " << c[1] << " and z is " << c[2] << std::endl;
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
	std::cout << std::endl << "facet f_01:" << std::endl;
	std::cout << "a is at => " << f01ax << ", " << f01ay << ", " << f01az << std::endl;
	std::cout << "b is at => " << f01bx << ", " << f01by << ", " << f01bz << std::endl;
	std::cout << "c is at => " << f01cx << ", " << f01cy << ", " << f01cz << std::endl;
	float cred = 0.00;
	float cgreen = 1.00;
	float cblue = 0.50;
	int csize = 12;
	color black;
	black.init_color(cred, cgreen, cblue, csize);
	black.add_facet(f_01);
	float black_red = black.get_rgb()[0];
	float black_green = black.get_rgb()[1];
	float black_blue = black.get_rgb()[2];
	std::cout << "color (rgb):" << black_red << ", " << black_green << ", " << black_blue;

}