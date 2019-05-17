#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void casa()
{
	cout << "-------------------------\n";
	cout << "          CASA           \n";
	cout << "-------------------------\n";
	cout << endl;
	return;
}

void DibujarCuadrado(int *x)
{
	for (int i = 0; i < *x; i++)
	{
		for (int j = 0; j < *x; j++)
		{
			if (i == 0 || i == *x - 1 || j == 0 || j == *x - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i >= 2 && i <= 7 && j >= 2 && j <= 7)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i >= 2 && i <= 7 && j >= 11 && j <= 16)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			if (i >= 11 && i <= 18 && j >= 5 && j <= 11)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	int ladoCasa = 20;
	int *p;
	casa();
	p = &ladoCasa;
	DibujarCuadrado(p);
	_getch();
}
