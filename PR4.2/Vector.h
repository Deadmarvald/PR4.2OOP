#pragma once
#include <iostream>
#include "Add.h"

class Vector : public Add
{
private:
	int vec1[10], vec2[10];
public:
	Vector();
	Vector(int vect1[10], int vect2[10]);
	~Vector() { };

	int GetVec1() { return vec1[10]; }
	int GetVec2() { return vec2[10]; }

	void Sum() override;
};