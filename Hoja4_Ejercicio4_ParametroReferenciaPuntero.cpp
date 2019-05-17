#include "pch.h";
#include <iostream>;
#include <conio.h>;
using namespace std;

int salarioSemanal(int *horas)
{
	int salario;
	if (*horas <= 40)
	{
		salario = *horas * 16;
	}
	else
	{
		salario = (40 * 16) + ((*horas - 40) * 20);
	}
	return salario;
}

int main()
{
	int horas;
	do {
		cout << "Inserte las horas que trabaja: ";
		cin >> horas;
	} while (horas < 0);
	cout << endl;
	int *p = &horas;
	cout << "Su salario semanal es de: $" << salarioSemanal(p) << endl;
	_getch();
}