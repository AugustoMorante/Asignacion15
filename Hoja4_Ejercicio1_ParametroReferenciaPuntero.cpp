#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

int totalPagar(int *x)
{
	int precio;
	int total;
	if (*x < 3)
	{
		total = *x * 145;
	}
	if (*x >= 3 && *x <= 5)
	{
		total = *x * 138;
	}
	if (*x > 5)
	{
		total = *x * 135;
	}
	return total;
}

int main()
{
	int neumaticos;
	do
	{
		cout << "Inserte numero de neumaticos: ";
		cin >> neumaticos;
		cout << endl;
	} while (neumaticos <= 0);
	int *p;
	p = &neumaticos;
	cout << "Total a pagar: " << totalPagar(p) << endl;
	_getch();
}

