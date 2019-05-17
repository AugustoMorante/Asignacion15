#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

double igv(int &z)
{
	double impuesto;
	impuesto = z * 18 / 100;
	return impuesto;
}

double precioFinal(int &x, int &y)
{
	int sinIGV;
	double conIGV;
	sinIGV = x * y;
	conIGV = sinIGV + igv(sinIGV);
	return conIGV;
}

int main()
{
	int cantidadUnidades, precio;
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
	cout << endl;
	cout << "El precio es de " << precioFinal(cantidadUnidades, precio) << " soles. (Incluye IGV)" << endl;
	_getch();
}