class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
public:
	void print() { std::println("[{},{}]\n", x, y); }
	void setX(double x1) { x = x1; }
	double getX() { return x; }
	void setY(double y1) { y = y1; }
	double getY() { return y; }
	Wektor2D()
	{
		x = 0.0;
		y = 0.0;
	}
	Wektor2D(double x1, double y1)
	{
		x = x1;
		y = y1;
	}
private:
	double x;
	double y;
};

Wektor2D operator+(Wektor2D v, Wektor2D w)
{
	return Wektor2D(v.getX() + w.getX(), v.getY() + w.getY());
}

double operator*(Wektor2D v, Wektor2D w)
{
	return v.getX() * w.getX() + v.getY() * w.getY();
}

