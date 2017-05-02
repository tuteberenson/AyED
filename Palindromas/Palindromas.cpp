#include <iostream>
#include <string>

using namespace std;

string palabraSinEspacios(string);
bool esPalindroma(string, string);

int main(int argc, char *argv[]) 
{
	string palabra, palabraNueva;
	getline(cin,palabra);
	
	
	for(int i = palabraSinEspacios(palabra).length(); i >= 0; i--)
	{
		cout << palabraSinEspacios(palabra)[i] << "\n";
		palabraNueva += palabraSinEspacios(palabra)[i];
	}
	 
	 palabraNueva = palabraSinEspacios(palabraNueva);
	 
	 
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
	//cout << devolver <<"\n";
	return devolver;
}
bool esPalindroma(string palabraOriginal, string palabraAcomparar)
{
//	cout << palabraSinEspacios(palabraOriginal) <<"\n";
//	cout << palabraSinEspacios(palabraAcomparar) <<"\n";
	string p1 = palabraSinEspacios(palabraOriginal);
	string p2 = palabraSinEspacios(palabraAcomparar);
//	cout <<  (palabraSinEspacios(palabraOriginal) == palabraSinEspacios(palabraAcomparar)) <<"\n";
	if(p1 == p2)
	{
		cout << "Pa" << "\n";
		return true;
	}
	else
	{
				cout << "No Pa" << "\n";
		return false;
	}
	
	//return (palabraSinEspacios(palabraOriginal) == palabraSinEspacios(palabraAcomparar));
}
