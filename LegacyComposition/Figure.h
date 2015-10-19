#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Figure {
	char* _type;
public:
	static int countChildren;
public: 
	Figure(char* type) {
		cout << "Figure Constructor" << endl;
		_type = new char[strlen(type) + 1];
		strcpy(_type, type);
	}
	~Figure() {
		cout << "Figure Destructor" << endl;
		delete[] _type;
	}

public: 
	void show() {
		cout << _type << endl;
	}
	int getChildren() {
		return countChildren;
	}
	virtual void draw() = 0;
};