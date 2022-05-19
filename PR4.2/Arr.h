#pragma once
#include <iostream>
#include "Add.h"

class Arr : public Add
{
private:
	int arr1[2][2], arr2[2][2];
public:
	Arr();
	Arr(int arre1[2][2], int arre2[2][2]);
	~Arr() { };

	int GetArr1() { return arr1[2][2]; }
	int GetArr2() { return arr2[2][2]; }

	void Sum() override;
};