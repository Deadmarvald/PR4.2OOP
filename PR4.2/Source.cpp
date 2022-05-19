#include <iostream>
#include <Windows.h> 
#include "Add.h"
#include "Complex.h"
#include "Vector.h"
#include "Arr.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Complex a(2, 3, 4, 5);
	cout << "Сума комплексних чисел: "; a.Sum();
	cout << endl;

	int vec1[10] = { 2, 5, 6, 3, 5, 2, 7, 4, 9, 2 };
	int vec2[10] = { 7, 6, 4, 1, 2, 9, 6, 6, 3, 1 };

	Vector b(vec1, vec2);
	cout << "Сума векторів: " << endl; b.Sum();
	cout << endl;

	int arr1[2][2] = { {2,3},{3,4} };
	int arr2[2][2] = { {1,2},{1,3} };

	Arr c(arr1, arr2);
	cout << "Сума матриць: " << endl; c.Sum();
	cout << endl;

	Add* arr[3];

	arr[0] = &a;
	cout << "Сума комплексних чисел: "; arr[0]->Sum();
	cout << endl;

	arr[1] = &b;
	cout << "Сума векторів: " << endl; arr[1]->Sum();
	cout << endl;

	arr[2] = &c;
	cout << "Сума матриць: " << endl; arr[2]->Sum();
	cout << endl;

	system("pause");
	return 0;
}