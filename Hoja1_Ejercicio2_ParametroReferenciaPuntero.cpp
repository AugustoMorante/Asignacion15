
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado(int *x, char *y)
{
	for (int i = 0; i < *x; i++)
	{
		for (int j = 0; j < *x; j++)
		{
			cout << *y;
		}
		cout << endl;
	}
	return;
}

int main()
{
	int n;
	char caracter;
	cout << "Inserte numero de filas y columnas: ";
	cin >> n;
	cout << "Inserte caracter: ";
	cin >> caracter;
	int *p1;
	char *p2;
	p1 = &n;
	p2 = &caracter;
	cout << endl;
	DibujaCuadrado(p1, p2);
	_getch();
}

