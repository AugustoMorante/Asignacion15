
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado(int *f, int *c)
{
	for (int i = 0; i < *f; i++)
	{
		for (int j = 0; j < *c; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return;
}

int main()
{
	int m, n;
	cout << "Inserte filas: ";
	cin >> m;
	cout << "Inserte columnas: ";
	cin >> n;
	int *p1, *p2;
	p1 = &m;
	p2 = &n;
	cout << endl;
	DibujaCuadrado(p1, p2);
	_getch();
}