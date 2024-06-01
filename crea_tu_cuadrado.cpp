// LibroClaificaciones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	unsigned int contador{ 1 };
	unsigned int lado{ 0 };

	cout << "\nINTRODUZCA EL LADO DEL CUADRADO QUE QUIERA GENERAR (-1 para salir): ";
	cin >> lado;

	while (lado != -1)
	{

		contador = 1;
		while (contador <= lado)
		{
			cout << "*";
			contador++;
		}

		contador = 3;

		while (contador <= lado)
		{
			cout << "\n*";
			int derecha = 3;
			while (derecha <= lado)
			{
				cout << " ";
				derecha++;
			}
			cout << "*";
			contador++;
		}
		contador = 1;
		cout << "\n";
		while (contador <= lado)
		{
			cout << "*";
			contador++;
		}

		cout << "\nINTRODUZCA EL LADO DEL CUADRADO QUE QUIERA GENERAR (-1 para salir): ";
		cin >> lado;
	}
	cout << "bye.";
}


