#ifndef CLASSES_H
#define CLASSES_H

class vertex{
	float coords[3]; // ALWAYS x y z
public:
	void set_coords(float x, float y, float z);
	float * get_coords();
};

class normal{
	float coords[3]; // ALWAYS x y z
public:
	void set_coords(float x, float y, float z);
	float * get_coords();
};


class facet{
	vertex points[3]; // ALWAYS a b c
	normal normals[3]; // ALWAYS x y z
public:
	normal * get_normals();
	vertex * get_points();
	void set_normals(normal a, normal b, normal c);
	void set_points(vertex a, vertex b, vertex c);
};

class color{
	std::vector<facet> facets;
	float rgb[3];
public:
	void add_facet(facet f);
	std::vector<facet> get_facets();
	float * get_rgb();
	void init_color(float r, float g, float b, int s);
};

#endif