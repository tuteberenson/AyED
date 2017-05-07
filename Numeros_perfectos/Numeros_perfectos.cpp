#include <iostream>

using namespace std;
bool esPerfecto(int);
int sumaDeDivisores(int);

int main(int argc, char *argv[]) {
	
	int cantEsPerfecto = 0, numero=1;

	
	while (cantEsPerfecto < 4)
	{
		if(esPerfecto(numero))
		{
			cout << numero << "\n";
			cantEsPerfecto++;
		}
		numero++;
	}
	
	return 0;
}
bool esPerfecto(int n)
{
	
	int suma=0, i = n-1;  
      
    while(i > 0){  
        if(n % i == 0) {
        
		suma += i;  
		}
		i--;  
    }  
    if (suma == n)
    {
    	return true;
    }
    else
    {
    	return false;
    }
}

