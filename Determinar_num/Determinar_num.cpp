#include <iostream>

using namespace std;

int main(int argc, char *argv[])
 {
 	
 	int n, cantPo=0,cantNe=0, cantCe=0;
 
		for(int i = 0; i < 10; i++){
		 	cout << "Ingrese n \n";
		 	cin >> n;
		 	
		 	if(n>0)
		 	{
			  cantPo++;
		 	}
		 	else if(n<0)
		 	{
		 		cantNe++;
		 	}
		 	else
		 	{
			  cantCe++;
		 	}
		
		}
		
		cout << "Cantidad de ceros: "<< cantCe << " - Cantidad positivos: " << cantPo << " - Cantidad negativos: "<< cantNe;
		
		int j;
		cout <<"a";
		cin >> j;
 		cout << j;

	return 0;
}
