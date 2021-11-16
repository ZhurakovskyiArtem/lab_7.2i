// Lab_7_2_1.cpp
// < Жураковського Артема >
// Лабораторна робота № 7.2.1)
// Опрацювання багатовимірних масивів ітераційними способами.
// Варіант 5
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int k, const int n, const int Low, const int High);
void Print(int** a, const int k, const int n);
int SumMinElem(int** a, const int k, const int n);
int main()
{
	srand((unsigned)time(NULL));
	int Low = 7;
	int High = 65;
	int k;
	cout << "k = "; cin >> k;
	int n;
	cout << "n = "; cin >> n;
	int** a = new int* [k];
	for (int i = 0; i < k; i++)
		a[i] = new int[n];
	Create(a, k, n, Low, High);
	Print(a, k, n);
		cout << "Sum of min elements = " << SumMinElem(a, k, n) << endl;
	return 0;
}
void Create(int** a, const int k, const int n, const int Low, const int High)
{
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int k, const int n)
{
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int SumMinElem(int** a, const int k, const int n)
{
	int S = 0, min = a[1][0];
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < min && i % 2 != 0)
			{
				min = a[i][j];
			}
		}
		if(i % 2 != 0)
		S += min;
	}
	return S;
}