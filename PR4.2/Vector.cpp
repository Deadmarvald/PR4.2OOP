#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector()
{
	for (int i = 0; i < 10; i++)
	{
		vec1[i] = 0;
		vec2[i] = 0;
	}
}

Vector::Vector(int vect1[10], int vect2[10])
{
	for (int i = 0; i < 10; i++)
	{
		vec1[i] = vect1[i];
		vec2[i] = vect2[i];
	}
}

void Vector::Sum()
{
	int sum[10];

	for (int i = 0; i < 10; i++)
	{
		sum[i] = vec1[i] + vec2[i];
		cout << i + 1 << ": " << sum[i] << "; " << endl;
	}
}