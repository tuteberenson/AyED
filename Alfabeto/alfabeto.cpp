#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	char alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int posicion;
	
	cout<< "Ingrese una posicion entre 1 y 26 \n";
	cin >> posicion;
	
	if(posicion >= 1 && posicion <= 26)
	{
		cout << "En la posicion "<< posicion << " se encuentra la letra "<< alfabeto[posicion-1]; 
	}
	else
	{
		cout<< "Ingrese una posicion entre 1 y 26 \n";
	}
	
	return 0;
}
