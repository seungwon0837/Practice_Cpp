#include <iostream>
using namespace std;

class Vector
{		
friend Vector operator+ (const Vector& v1, const Vector& v2);
friend Vector operator- (const Vector& v1, const Vector& v2);
friend Vector operator* (const Vector& v1, const double alpha);
friend Vector operator* (const double alpha, const Vector& v1);
friend bool operator== (const Vector& v1, const Vector& v2);
friend bool operator!= (const Vector& v1, const Vector& v2);
friend istream& operator>> (istream& in, Vector &v);
friend ostream& operator<< (ostream& os, const Vector& v);



private:
	double x, y;
public:
	Vector(double value_x = 0.0, double value_y = 0.0) : x(value_x), y(value_y){}
	void display() { cout << "(" << x << ", " << y << ")" << endl; }
	Vector& operator= (const Vector v2)
	{
		this->x = v2.x;
		this->y = v2.y;
		return *this;
	}

	//prefix
	Vector& operator++()
	{
		x++;	y++;
		return *this;
	}

	Vector& operator--()
	{
		x--;	y--;
		return *this;
	}
	
	
	//postfix
	Vector& operator++(int)
	{
		Vector temp = *this;
		x++;	y++;
		return *this;
	}


	Vector& operator++(int)
	{
		Vector temp = *this;
		x--;	y--;
		return *this;
	}




};

// 사칙연산
Vector operator+ (const Vector& v1, const Vector& v2)	{return Vector(v1.x + v2.x, v1.y + v2.y);}
Vector operator- (const Vector& v1, const Vector& v2) { return Vector(v1.x - v2.x, v1.y - v2.y); }
Vector operator* (const Vector& v1, const double alpha) { return Vector(v1.x * alpha, v1.y * alpha); }
Vector operator* (const double alpha, const Vector& v1) { return Vector(v1.x * alpha, v1.y * alpha); }

// 비교
bool operator== (const Vector& v1, const Vector& v2) { return v1.x == v2.x && v1.y == v2.y; }
bool operator!= (const Vector& v1, const Vector& v2) { return !(v1 == v2); }

//  입출력
istream& operator >> (istream& in, Vector& v) 
{
	in >> v.x >> v.y; 
	if (!in) { v = Vector(0, 0); }
	return in;
}

ostream& operator<< (ostream& os, const Vector& v) 
{ os << "(" << v.x << ", " << v.y << ")" << endl; return os; }


int main()
{
	Vector v1(1, 2);
	Vector v2(2, 3);
	Vector v3;
	cin >> v3;

	cout << v3 << endl;
	
}