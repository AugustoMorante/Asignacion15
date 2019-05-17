#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

double igv(int *z)
{
	double impuesto;
	impuesto = *z * 18 / 100;
	return impuesto;
}

double precioFinal(int *x, int *y)
{
	int sinIGV;
	int *p3;
	double conIGV;
	sinIGV = *x * *y;
	p3 = &sinIGV;
	conIGV = sinIGV + igv(p3);
	return conIGV;
}

int main()
{
	int cantidadUnidades, precio;
	int *p1, *p2; 
	do {
		cout << "Inserte cantidad de unidades: " << endl;
		cin >> cantidadUnidades;
	} while (cantidadUnidades <= 0);
	cout << endl;
	do
	{
		cout << "Inserte el precio del producto en soles: " << endl;
		cin >> precio;
	} while (precio <= 0);
	p1 = &cantidadUnidades;
	p2 = &precio;
	cout << endl;
	cout << "El precio es de " << precioFinal(p1, p2) << " soles. (Incluye IGV)" << endl;
	_getch();
}