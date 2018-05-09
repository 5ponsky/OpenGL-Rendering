

#include "Vertex.h"
#include <iostream>
using namespace std;

Vertex::Vertex(double x, double y, double z) {
  coords[0] = x;
  coords[1] = y;
  coords[2] = z;
}

Vertex::~Vertex() {
  delete[] coords;
}

const double Vertex::getX() {
  return coords[0];
}

const double Vertex::getY() {
  return coords[1];
}
const double Vertex::getZ() {
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
