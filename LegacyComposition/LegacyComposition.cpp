// LegacyComposition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rectangle.h"


int Figure::countChildren = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	Rectangle* rectangle = new Rectangle("Rectangle");
	Rectangle* newRectangle = new Rectangle("NewRectangle");

	rectangle->show();
	rectangle->draw();

	newRectangle->show();
	newRectangle->draw();

	cout << "How many children: " << Figure::getChildren() << endl;

	system("pause");
	return 0;
}

