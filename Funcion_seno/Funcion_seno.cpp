#include <iostream>
#include <stdlib.h>
#include <math.h>
float convertirARadianes(float angulo);
using namespace std;


const float PI = 3.14159265;

int main(int argc, char *argv[]) 
{
	float angulo, anguloEnRadianes;
	
	
	
	cout << "Ingrese un ángulo en grados";
	cin >> angulo;
	
	anguloEnRadianes = convertirARadianes(angulo);
	 
	while(anguloEnRadianes > 2*PI)
	{
		anguloEnRadianes -= (2*PI);
	}
	if (!(anguloEnRadianes<=(PI/2) && anguloEnRadianes>= -(PI/2)))
	{
		if (anguloEnRadianes < PI)
		{
			cout << "Menor que pi";
			anguloEnRadianes += PI;
		}
		if(anguloEnRadianes > PI)
		{
			cout << "Mayor que pi";
			anguloEnRadianes -= PI ;
		}
	}
	
	float seno;
	
	seno = anguloEnRadianes - (pow(anguloEnRadianes,3)/6) + (pow(anguloEnRadianes,5)/120);
	
	cout << seno;
	

		 
	return 0;
}

float convertirARadianes(float  angulo){
	
	return (PI*angulo)/180;
}
