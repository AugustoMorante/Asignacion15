
#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado(int x, char y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << y;
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
	cout << endl;
	DibujaCuadrado(n, caracter);
	_getch();
}

