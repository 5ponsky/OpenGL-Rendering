

#ifndef VERTEX_H
#define VERTEX_H

class Vertex {
public:
	Vertex();
  Vertex(double x, double y, double z);
  ~Vertex();

  // Not sure if I want to return addresses for direct manipulation
  const double getX();
  const double getY();
  const double getZ();
	const double get(int i);
  const double& getCoords();

  void setX(const double _x);
  void setY(const double _y);
  void setZ(const double _z);

  void set_coords(const Vertex& _coords);
	void set_coords(const double& _coords);

private:
	double coords[3];

protected:
	
};

#endif
