#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad, desde;
	
	cout << "Ingrese cantidad de numeros a imprimir...\n";
	cin >> cantidad;
	
	cout << "Ingrese desde que numero empezar...\n";
	cin >> desde;
	
	cout << "\n--------\n";
	
	for(int i = 0; i < cantidad; i++)
	{
		cout  << desde + i << "\n";
	}
	return 0;
}
