// CopyConstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


//copy constructor helps to initialize or set the members propertys. Deep copy

class Point
{
public:
	Point(int inx, int iny)
	{
		x = inx; y = iny;
	}
	Point(const Point &p)
	{
		x = p.x; y = p.y;
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}
private:
	int x, y;
	
};



int main()
{
	Point p1(10, 20);

	Point p2 = p1;

	cout << "x:" << p2.getX() << " y:" << p2.getY();
	

    return 0;
}

