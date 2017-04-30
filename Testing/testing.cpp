#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) 
{
	
	int n = 0, factorial;
	
	while (n<=0)
	{
		cout << "Ingrese nn"<<endl;
		cin>> n;
		if (n==0)
		{
			cout << "El factorial de 0 es 1"<<endl;
		}
		factorial = n;
		
		for(int i=1; i<n;i++)
		{
			factorial *=i;
		}
		
		cout << "El factorial de "<<n<<" es "<< factorial<<endl;
	}
	
	return 0;
}
