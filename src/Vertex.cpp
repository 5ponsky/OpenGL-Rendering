

#include "Vertex.h"
#include <iostream>
using namespace std;

Vertex::Vertex() { }

Vertex::Vertex(double x, double y, double z) {
  coords[0] = x;
  coords[1] = y;
  coords[2] = z;
}

Vertex::~Vertex() {
  
}

double Vertex::get(int i) const {
	if(i > 3) // Always in 3D
		throw "out of bounds";

	return coords[i];
}

double Vertex::getX() const {
  return coords[0];
}

double Vertex::getY() const {
  return coords[1];
}

double Vertex::getZ() const {
  return coords[2];
}

void Vertex::setX(const double _x) {
  coords[0] = _x;
}

void Vertex::setY(const double _y) {
  coords[0] = _y;
}

void Vertex::setZ(const double _z) {
  coords[0] = _z;
}

void Vertex::set_coords(const Vertex _coords) {
	coords[0] = _coords.getX();
	coords[1] = _coords.getY();
	coords[2] = _coords.getZ();
}

void Vertex::set_coords(const double* _coords) {
	coords[0] = _coords[0];
	coords[1] = _coords[1];
	coords[2] = _coords[2];
}
