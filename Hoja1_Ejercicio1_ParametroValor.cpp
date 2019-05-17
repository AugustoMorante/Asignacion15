
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado(int f, int c)
{
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
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
	cout << endl;
	DibujaCuadrado(m, n);
	_getch();
}