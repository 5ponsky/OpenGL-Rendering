

#include "LineSegment.h"
#include "Vertex.h"
#include <math.h>

LineSegment::LineSegment(Vertex& _a, Vertex& _b) : Vertex() {
  a = _a;
  b = _b;

  // Calculate distance
  length = 0;
  for(size_t i = 0; i < 3; ++i) {
    length += (_a.get(i) - _b.get(i)) * (_a.get(i) - _b.get(i));
  }
  length = sqrt(length);

}
