#include "Arr.h"
#include <iostream>

using namespace std;

Arr::Arr()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr1[i][j] = 0;
			arr2[i][j] = 0;
		}
	}
}

Arr::Arr(int arre1[2][2], int arre2[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr1[i][j] = arre1[i][j];
			arr2[i][j] = arre2[i][j];
		}
	}
}

void Arr::Sum()
{
	int sum[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
			cout << "(" << i + 1 << ", " << j + 1 << "): " << sum[i][j] << endl;
		}
	}
}