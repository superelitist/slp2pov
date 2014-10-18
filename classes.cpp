#include "stdafx.h"


void vertex::set_coords(float x, float y, float z) {
	vertex::coords[0] = x;
	vertex::coords[1] = y;
	vertex::coords[2] = z;
}
float * vertex::get_coords() { return vertex::coords; }

void normal::set_coords(float x, float y, float z) {
	normal::coords[0] = x;
	normal::coords[1] = y;
	normal::coords[2] = z;
	}
float * normal::get_coords() { return coords; }

void facet::set_points(vertex a, vertex b, vertex c) {
	facet::points[0] = a;
	facet::points[1] = b;
	facet::points[2] = c;
}
vertex * facet::get_points() { return points; }
void facet::set_normals(normal a, normal b, normal c) {
	facet::normals[0] = a;
	facet::normals[1] = b;
	facet::normals[2] = c;
}
normal * facet::get_normals() { return normals; }


void color::init_color(float r, float g, float b, int s) {
	color::rgb[0] = r;
	color::rgb[1] = g;
	color::rgb[2] = b;
	color::facets.resize(s);
}
void color::add_facet(facet f) {
	color::facets.push_back(f);
}
std::vector<facet> color::get_facets() {
	return color::facets;
}
float * color::get_rgb() {
	return color::rgb;
}