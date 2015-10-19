#pragma once

#include "Figure.h"
#include "Point.h"
#include <cmath>

class Rectangle : public Figure {
	Point* p1; Point* p2; Point* p3; Point* p4;
	int width, height;
public:
	Rectangle(char* name) : Figure(name) {
		cout << "Rectangle Constructor" << endl;
		p1 = new Point(0, 0);
		p2 = new Point(0, 5);
		p3 = new Point(7, 0);
		p4 = new Point(7, 5);
		width = 0;
		height = 0;
		countChildren++;
	}
public: 
	void draw() {
		width = sqrt(pow(p3->getX() - p1->getX(), 2) + pow(p3->getY() - p1->getY(), 2));
		height = sqrt(pow(p2->getX() - p1->getX(), 2) + pow(p2->getY() - p1->getY(), 2));
		cout << "Width: " << width << ", Height: " << height << endl;
	}

};