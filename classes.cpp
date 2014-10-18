#include "stdafx.h"

class vertex {
	float coords[3]; // ALWAYS x y z
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
	normal normals[3]; // ALWAYS x y z
public:
	void set_points(vertex a, vertex b, vertex c) {
		points[0] = a;
		points[1] = b;
		points[2] = c;
	}
	vertex * get_points() { return points; }
	void set_normals(normal a, normal b, normal c) {
		normals[0] = a;
		normals[1] = b;
		normals[2] = c;
	}
	normal * get_normals() { return normals; }
};

class color {
	std::vector<facet> facets;
	float rgb[3];
public:
	void init_color(float r, float g, float b, int s) {
		rgb[0] = r;
		rgb[1] = g;
		rgb[2] = b;
		facets.resize(s);
	}
	void add_facet(facet f) {
		facets.push_back(f);
	}
	std::vector<facet> get_facets() {
		return facets;
	}
	float * get_rgb() {
		return rgb;
	}
};