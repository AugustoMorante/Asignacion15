#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado(int a, int b, char c)
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (i == b && j == a)
			{
				cout << c;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return;
}

int main()
{
	int x, y, n;
	char caracter;
	do {
		cout << "Inserte coordenada X: ";
		cin >> x;
	} while (x > 50);
	do{
		cout << "Inserte coordenada Y: ";
		cin >> y;
	} while (y > 50);
	cout << "Inserte lado: ";
	cin >> n;
	cout << "Inserte caracter: ";
	cin >> caracter;
	DibujaCuadrado(x, y, caracter);
	_getch();
}