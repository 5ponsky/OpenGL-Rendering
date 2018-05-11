

#ifndef LINESEGMENT_H
#define LINESEGMENT_H

#include <math.h>
#include <iostream>
#include <string>

#include "Vertex.h"

using namespace std;

class LineSegment { 
public:
  LineSegment(Vertex& _a, Vertex& _b);
  ~LineSegment();

  const Vertex* getA();
  const Vertex* getB();
  const double getLength();

  void setA(Vertex& _coords);
  void setB(Vertex& _coords);

  void setA(double* _coords);
  void setB(double* _coords);

	void print();

private:
  double length;
  Vertex* a;
	Vertex* b;
};

#endif
