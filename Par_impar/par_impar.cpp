#include <iostream>
using namespace std;

bool esPar(int);

int main(int argc, char *argv[]) {
	
	int ingreso, contPares = 0, contImpares = 0;
	
	cin >> ingreso;
	
	while (ingreso != 0)
	{
		if(ingreso < 0)
		{
			cout << "Ingrese un valor mayor a 0 \n";
		}
		else
		{
			if(esPar(ingreso))
			{
				contPares++;
			}	
			else
			{
			 	contImpares++;
			}
		}
		
		cin >> ingreso;
	}
	
	cout << "Cantidad de numeros pares: " << contPares << " y cantidad de impares: " << contImpares;
	
	
	return 0;
}

bool esPar(int numero)
{
	return numero % 2 == 0;
}
