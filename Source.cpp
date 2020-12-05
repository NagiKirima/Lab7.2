#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int triangle(int k,...) 
{
	int count = 0;
	int* p = &k;
	int* arr = new int[k];
	for (int i = 0; i < k; i++) 
	{
		p++;
		arr[i] = *p;
		cout << arr[i] << "\t"; //проверка
	}

	for (int i = 0; i <= k-3; i++) 
	{
		if (arr[i] < arr[i + 1] + arr[i + 2] && arr[i + 1] < arr[i] + arr[i + 2] && arr[i + 2] < arr[i + 1] + arr[i]) 
		{
			count++;
		}
	}
	delete[] arr;
	cout << "count = ";
	return count;
}
void Check(int k, ...) 
{
	int* p = &k;
	int a, b, c;
	p++; a = *p;
	p++; b = *p;
	p++; c = *p;
	if (a < b + c && b < a + c && c < a + b)
	{
		cout << "Можно\n";
	}
	else cout << "Нельзя\n";
}

int GetSide() 
{
	int size;
	while (!(cin >> size) || (cin.peek() != '\n') || size < 1)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Введите корректное число\t";
	}
	return size;
}
int main() 
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int a, b, c;
	cout << "Введите 1-ую сторону треугольника\t";
	a = GetSide();
	cout << "Введите 2-ую сторону треугольника\t";
	b = GetSide();
	cout << "Введите 3-ью сторону треугольника\t";
	c = GetSide();
	Check(3, a, b, c);

	int m;
	cout << endl << "Введите максимальное значение сторон треугольника:\t";
	cin >> m;

	cout << triangle(3, rand() % m + 1, rand() % m + 1, rand() % m + 1) << endl << endl;
	cout << triangle(9, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1) << endl << endl;
	cout << triangle(11, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1, rand() % m + 1,rand() % m + 1, rand() % m + 1) << endl << endl;
}