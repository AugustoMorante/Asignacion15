#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;

void presentacion()
{
	cout << "-------------------\n";
	cout << " Pizzeria Don Raul \n";
	cout << "-------------------\n";
	cout << endl;
	return;
}

double precioPizza(int *x, int *y)
{
	double tamano, ingredienteExtra;
	double precio;
	tamano = *x * 1.5;
	ingredienteExtra = *y * 2.5;
	precio = tamano + ingredienteExtra;
	return precio;
}

int main()
{
	int cent, ing;
	presentacion();
	do {
		cout << "Inserte los centimetros de su pizza: " << endl;
		cin >> cent;
	} while (cent <= 0);
	cout << endl;
	do {
		cout << "Inserte la cantidad de ingredientes extra que desea: " << endl;
		cin >> ing;
	} while (ing < 0);
	cout << endl;
	int *p1, *p2;
	p1 = &cent;
	p2 = &ing;
	cout << "El precio de su pizza es de " << precioPizza(p1, p2) << " soles." << endl;
	_getch();
}