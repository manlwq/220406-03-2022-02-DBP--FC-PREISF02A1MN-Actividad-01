#include <iostream>
using namespace std;
const int MAX = 100;
void cargar_arreglo(int n[], int final);
void listar(int n[], int final);
int	suma_todos(int n[], int final);
float promedio(int n[], int final);
float suma_pares(int n[], int final);
float suma_impares(int n[], int final);
void factorial(int n[], int final);
void divisores(int n[], int final);
int main(int argc, char* argv[])
{
	int n[MAX], q;
	cout << "Ingresar la cantidad:";
	cin >> q;
	string estado;
	do
	{
		cout << "<<<<<<<ARREGLO>>>>>>>>\n";
		cargar_arreglo(n, q);
		listar(n, q);
		cout << "\n***La suma es:" << suma_todos(n, q) << endl;
		cout << "\n***El promedio es:" << promedio(n, q) << endl;
		cout << "\n***La suma de pares:" << suma_pares(n, q) << endl;
		cout << "\n***La suma de impares:" << suma_impares(n, q) << endl;
		factorial(n, q);
		divisores(n, q);
		cout << "\n¿Desea continuar (S/s)?:";
		cin >> estado;
	} while (estado == "S" || estado == "s");

	return 0;
}
void cargar_arreglo(int n[], int final)
{

	for (int i = 0; i < final; i++)
	{
		cout << "Digite los numeros del arreglo:";
		cin >> n[i];
	}
}
void listar(int n[], int final)
{
	cout << "Listar \n";
	for (int i = 0; i < final; i++)
	{
		cout << n[i] << "\n";
	}
}
void factorial(int n[], int final)
{
	int factorial = 1;
	for (int i = 0; i < final; i++)
	{
		cout << "\n***El factorial de " << n[i] << " es: ";
		factorial = 1;
		for (int j = 1; j <= n[i]; j++)
		{
			factorial *= j;
		}
		cout << factorial << endl;
	}
}
void divisores(int n[], int final)
{

	for (int i = 0; i < final; i++)
	{
		for (int j = 1; j <= n[i]; j++)
		{

			if (n[i] % j == 0)
			{
				cout << "\n***Los divisores de " << n[i] << " son: ";
				cout << j << "\n";
			}

		}
	}
}

int		suma_todos(int n[], int final)
{
	int suma = 0;

	for (int i = 0; i < final; i++)
	{
		suma += n[i];
	}
	return suma;
}
float promedio(int n[], int final)
{
	int suma = 0,
		i;
	for (i = 0; i < final; i++)
	{
		suma += n[i];
	}
	return (float)suma / i;
}
float suma_pares(int n[], int final)
{
	int i,

		sumPares = 0;

	for (i = 0; i < final; i++)
	{
		if (n[i] % 2 == 0)
		{
			sumPares += n[i];
		}
	}
	return (float)sumPares;
}

float suma_impares(int n[], int final)
{
	int i,

		sum_impares = 0;

	for (i = 0; i < final; i++)
	{
		if (n[i] % 2 == 1)
		{
			sum_impares += n[i];
		}
	}
	return (float)sum_impares;
}
