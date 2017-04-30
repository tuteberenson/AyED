#include <cstdlib>
#include <iostream>

using namespace std;

string convertirANumerosRomanos(int);

int main(int argc, char *argv[]) {
	
	int anio;
	
	cin >> anio;
	
	if(anio <= 2011 && anio >= 1000)
	{
		cout<< "El año " << anio << " en números romanos es: " << convertirANumerosRomanos(anio);
	}
	return 0;
}

string convertirANumerosRomanos(int anio)
{
	string resultado ="";


		
		if(anio >= 2000)
		{
			resultado += "MM";
			anio-=2000;
		}
		else if(anio >= 1000)
		{
			resultado += "M";
			anio-=1000;
		}else if(anio >= 900 )
		{
			resultado += "CM";
			anio-=900;
		}
		
		if(anio >= 500)
		{
			resultado += "D";
			anio -= 500; 
		}else if(anio >= 400)
		{
			resultado+="CD";
			anio -= 400;
		}
		do 
			{
			
		resultado+="C";
		anio -= 100;
			}
		while(anio >= 100);
		
		if(anio >= 90)
		{
			resultado+="XC";
			anio -= 90;
		}
		
			do 
			{
			
		resultado+="X";
		anio -= 10;
			}
		while(anio >= 10);
		
		if(anio >= 9)
		{
			resultado+="IX";
			anio -= 9;
		}
		
		if(anio >= 5)
		{
			resultado += "V";
			anio -= 5; 
		}else if(anio >= 4)
		{
			resultado+="IV";
			anio -= 4;
		}
			do 
			{
			
		resultado+="I";
		anio -= 1;
			}while(anio >= 1);
		
		
	

return resultado;
} 
