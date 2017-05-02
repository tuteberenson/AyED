#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	int cantidad, contador = 0, actual = 0, anterior= 0 , resultado = 0;
	
	cout << "Ingrese cantidad de numeros para la sucesion"<< "\n";
	cin >> cantidad;
	

	if (cantidad > 0)
	{
		cout << actual << "\n";
		actual = 1;
	
		
		while (contador < cantidad)
		{
			resultado = actual + anterior;
			cout << resultado << "\n";
			if (contador > 0)
			{
				anterior = actual; 
				actual = resultado;
			}
			contador++; 
		}		
	}
	return 0;
}
