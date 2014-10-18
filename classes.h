#ifndef CLASSES_H
#define CLASSES_H
#include "stdafx.h"

class vertex;
void set_coords(float x, float y, float z);
float * get_coords();

class normal;
void set_coords(float x, float y, float z);
float * get_coords();

class facet;
normal * get_normals();
vertex * get_points();
void set_normals(normal a, normal b, normal c);
void set_points(vertex a, vertex b, vertex c);

class color;
void add_facet(facet f);
std::vector<facet> get_facets();
float * get_rgb();
void init_color(float r, float g, float b, int s);

#endif