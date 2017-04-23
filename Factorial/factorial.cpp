#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
	int N = 0, factorial = 1;
	
	
	cout << "Ingrese N\n";
	cin >> N;
	
	 if (N > 0)
	 {
	 	for(int i=1; i<=N; i++)
	 	{
		  factorial *= i;
	 	}
	 }
	 else if(N == 0)
	 {
	 	factorial = 1;
	 }
	 
	 cout <<"Factorial de "<< N << " = " << factorial;
	 
}
