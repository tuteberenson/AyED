#include <iostream>
#include <string>

using namespace std;

string palabraSinEspacios(string);
bool esPalindroma(string, string);

int main(int argc, char *argv[]) 
{
	string palabra, palabraNueva;
	
	cout << "Ingrese una frase/palabra";
	getline(cin,palabra);
	
	
	for(int i =palabra.length()-1; i >= 0; i--)
	{
		palabraNueva += palabra[i];
	}
	 
	 
	if (esPalindroma(palabra,palabraNueva)){
		cout << palabra << " y " << palabraNueva << " son palindromas";
	}else
	{
		cout << palabra << " y " << palabraNueva << " NO son palindromas";
	}
	
	return 0;
}

string palabraSinEspacios(string palabra){
	string devolver;
	
	for(int i = palabra.length(); i >= 0; i--)
	{
		if(palabra[i] != ' ')
		{
		  devolver += palabra[i];
		}
	}
	return devolver;
}
bool esPalindroma(string palabraOriginal, string palabraAcomparar)
{
	string p1 = palabraSinEspacios(palabraOriginal);
	string p2 = palabraSinEspacios(palabraAcomparar);
	if(p1 == p2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
