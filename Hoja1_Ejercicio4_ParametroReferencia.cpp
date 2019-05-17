#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void identificadorColor(char &color)
{
	if (color == 'A' || color == 'a')
	{
		system("color 0A");
	}
	if (color == 'B' || color == 'b')
	{
		system("color 0B");
	}
	if (color == 'C' || color == 'c')
	{
		system("color 0C");
	}
	if (color == 'D' || color == 'd')
	{
		system("color 0D");
	}
	if (color == 'E' || color == 'e')
	{
		system("color 0E");
	}
	if (color == 'F' || color == 'f')
	{
		system("color 0F");
	}
	return;
}

void DibujaRectangulo(int &a, int &b, char &c)
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
	char color;
	int x, y, w, h;
	char caracter;
		cout << "Inserte letra de color(A-F): ";
		cin >> color;
		identificadorColor(color);
	do {
		cout << "Inserte coordenada X: ";
		cin >> x;
	} while (x > 50);
	do {
		cout << "Inserte coordenada Y: ";
		cin >> y;
	} while (y > 50);
	cout << "Inserte ancho: ";
	cin >> w;
	cout << "Inserte largo: ";
	cin >> h;
	cout << "Inserte caracter: ";
	cin >> caracter;
	DibujaRectangulo(x, y, caracter);
	_getch();
}