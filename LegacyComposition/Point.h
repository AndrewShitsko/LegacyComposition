#pragma once

class Point {
	int _x, _y;
public:
	Point(int x, int y) {
		cout << "Point Constructor" << endl;
		_x = x;
		_y = y;
	}
	~Point(){}
public:
	int getX() {
		return _x;
	}
	void setX(int x) {
		_x = x;
	}
	int getY() {
		return _y;
	}
	void setY(int y) {
		_y = y;
	}
};