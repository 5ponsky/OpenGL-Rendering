

#include "LineSegment.h"

double distance(Vertex _a, Vertex _b) {
	// Calculate distance
	double length = 0;
	for(int i = 0; i < 3; ++i) {
		length += (_a.get(i) - _b.get(i)) * (_a.get(i) - _b.get(i));
	}
	length = sqrt(length);
	return length;
}

LineSegment::LineSegment(Vertex& _a, Vertex& _b) {
  a = &_a;
  b = &_b;

	length = distance(a, b);
}

LineSegment::~LineSegment() {
	//delete a;
	//delete b;
}

const Vertex* LineSegment::getA() { return a; }

const Vertex* LineSegment::getB() { return b; }

void LineSegment::setA(Vertex& _coords) {
	delete a;
	a = &_coords;
}

void LineSegment::setB(Vertex& _coords) {
	delete b;
	b = &_coords;
}

void LineSegment::setA(double* _coords) {
	a->set_coords(_coords);
}

void LineSegment::setB(double* _coords) {
	b->set_coords(_coords);
}

void LineSegment::print() {
	cout << "A: (" << a->getX() << ", " << a->getY() << ", " << a->getZ() << ")   "
		<< "B: (" << b->getX() << ", " << b->getY() << ", " << b->getZ() << ")   "
		<< "distance" << length;
}