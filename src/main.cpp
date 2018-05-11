#include <iostream>

#include "LineSegment.h"
#include "Vertex.h"
using namespace std;

int main() {
  Vertex v(1.0, 1.2, 3.0);
	Vertex v2(7.6, -10, 5.5);

	LineSegment ls(v, v2);
	ls.print();



  return 0;
}
