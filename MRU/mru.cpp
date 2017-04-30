#include <iostream>
using namespace std;

double posicionMRU(double, double);

int main(int argc, char *argv[]) {
	
	double v,t;
	cout << "Ingrese velocidad(m/s) \n";
	cin >> v;
	cout << "Ingrese tiempo(s) \n";	
	cin >> t;
	
	
	if (t > 0)
	{	
			cout <<  posicionMRU(t, v)<< " m";
	}
		 
	return 0;
}

double posicionMRU(double tiempo,  double velocidad)
{
	return velocidad * tiempo;
}
