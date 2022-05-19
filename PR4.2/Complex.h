#pragma once
#include <iostream>
#include "Add.h"

class Complex :public Add
{
private:
	int x1, y1, x2, y2;
public:
	Complex();
	Complex(int x1, int y1, int x2, int y2);
	~Complex() { };

	int GetX1() { return x1; }
	int GetY1() { return y1; }
	int GetX2() { return x2; }
	int GetY2() { return y2; }

	void Sum() override;
};