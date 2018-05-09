

#ifndef LINESEGMENT_H
#define LINESEGMENT_H

#include "Vertex.h"

class LineSegment {
public:
  LineSegment(Vertex _a, Vertex _b);
  ~LineSegment();

  const Vertex& getA();
  const Vertex& getB();
  const double getLength();

  void setA(const Vertex& _coords);
  void setB(const Vertex& _coords);

  void setA(const int& _coords);
  void setB(const int& _coords);

private:
  double length;
  Vertex a, b;
};

#endif
