#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado(int *a, int *b, char *c)
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (i == *b && j == *a)
			{
				cout << *c;
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
	int *p1, *p2;
	char *p3;
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
	p1 = &x; p2 = &y; p3 = &caracter;
	DibujaCuadrado(p1, p2, p3);
	_getch();
}