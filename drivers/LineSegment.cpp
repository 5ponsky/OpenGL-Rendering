


#include "Vertex.h"
#include "LineSegment.h"
#include <math.h>

LineSegment::LineSegment(Vertex _a, Vertex _b) {
  a = _a;
  b = _b;

  // Calculate distance
  length = 0;
  for(size_t i = 0; i < 3; ++i) {
    length += (_a[i] * _a[i]);
  }
  length = sqrt(length);

}
