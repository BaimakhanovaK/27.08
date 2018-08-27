// 27.08.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

//zadacha4
void oper(double *a, double *b, char o, double *rez) {
	if (o == '+')
		*rez= *a + *b;
	else if (o == '-')
		*rez= *a - *b;
	else if (o == '*')
		*rez= *a * *b;
	else if (o == '/')
	{
		if (*b == 0)
		{
			cout << "Division by zero";
			*rez= 0;
		}
		else
			*rez= *a / *b;
		}
}

//zadacha5
void plus_arr(int *a, int *b, int *c, int n) {

	for (int i = 0; i < n; i++)
	{
		c[i] = a[i] + b[i];
	}
}

//zadacha 7
int *subarray(int *a, int n, int *b, int m) {
	int *p1 = a, *p2 = b;
	int k = 1;
	for (; p2 < b + m; p2++) {
		for (; p1 < a + n; p1++) {
			if (*p1 == *p2)
			{
				for (int i = 1; i < m; i++)
				{
					if (*(p1 + i) == *(p2 + i))
						k++;
				}
			}
			if (k == m)
				return p1;
		}
	}
	return nullptr;
}

//zadacha 10
void erase_negative(int  *&a, int &n) {
	int *tmp;
	int k = 0;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			k++;
	tmp = new int[k];
	for (int i = 0; i < n; i++)
			if (a[i] >= 0)
				tmp[j++] = a[i];

		delete[] a;
		a = tmp;
		n = k;
	}
}

int main()
{
	//zadacha 10
	
	int  *a;
	int n;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = -10 + rand() %20;
		cout << a[i] << " ";
	}
	cout << endl;
	erase_negative(a, n);

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	delete[] a;


	//zadacha 7
	/*int a[] = { 1,3,4,2,7,5,0,9,4,2 };
	int b[] = { 4,2,7,5 };

	cout << *subarray(a, 10, b, 4) << endl;*/

	//zadacha 3
	/*double *p;
	int n;
	cin >> n;
	p = new double[n];
	for (int i = 0; i < n; i++)
	{
		p[i] = 1.0 / (rand() % 20+1);
		cout << p[i] << " ";
	}
	delete[] p;*/

	//zadacha 1
	/*int a[7][8];
	int *p;
	int k = 0;
	srand(time(NULL));

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			a[i][j] = rand() % 101 - 20;
			if (a[i][j] < 0)
				k++;
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << k << endl;

	p = new int[k];
	int n = 0;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (a[i][j] < 0)
				p[n++] = a[i][j];
		}
	}
	for (int i = 0; i < k; i++)
		cout << p[i] << " ";
	cout << endl;

	delete[]p;*/

	//zadacha2
	/*int a[9][7];
	srand(time(NULL));
	int k = 0;
	int *p;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			a[i][j] = -50 + rand() % 150;
			if (a[i][j] % 3 == 0 || a[i][j] % 5 == 0 || a[i][j] % 7 == 0)
				k++;
				cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
	cout << k << endl;
	
	p = new int[k];
	int n = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (a[i][j] % 3 == 0 || a[i][j] % 5 == 0 || a[i][j] % 7 == 0)
				p[n++] = a[i][j];
		}
	}
	for (int i = 0; i < k; i++)
		cout << p[i] << " ";
	cout << endl;

	delete[] p;*/

	//zadacha4
	//double a, b,rez=0;
	//char operation;
	//cin >> a >> operation >> b;
	//oper(&a, &b, operation,&rez);
	//cout << rez << endl;

	//zadacha 5
	/*srand(time(NULL));
	int *a, *b, *c;
	int n;
	cin >> n;
	a = new int[n];
	b = new int[n];
	c = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 51;
		b[i] = rand() % 41;
		cout << "a[" << i << "]=" << a[i] << "   " << "b[" << i << "]="<<b[i]<<endl;
	}

	plus_arr(a, b, c, n);
	for (int i = 0; i < n; i++)
		cout << c[i] << endl;
		delete[] a, delete[] b, delete [] c;*/




	
	system("pause");
    return 0;
}

