#include <iostream>
#include<string>
using namespace std;

string cifrarFrase(string, int);
int getIndexLetra(char);

char array[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main(int argc, char *argv[]) {
	
	
	
	string frase;
	int cifrado;

	cout << "Ingrese una frase \n";
		
	getline(cin, frase);
	
	cout << "Ingrese un número entre 1 y 26 para el cifrado \n";
	
	cin >> cifrado;
	
	//frase = toupper(frase);
	
	cout << cifrarFrase(frase, cifrado);
	
	return 0;
}

string cifrarFrase(string frase, int n)
{
	string fraseCifrada = "";
	for (int i = 0; i < frase.length(); i++)
	{
		if (getIndexLetra(frase[i])+n > 25)
		{
		//	cout << "\n" <<(getIndexLetra(frase[i])+n) - 25<< "\n";
			fraseCifrada += array[(getIndexLetra(frase[i])+n)-26];
		}
		else
		{
		fraseCifrada += array[getIndexLetra(frase[i])+n];
		}	
	}
	return fraseCifrada;
}

int getIndexLetra(char letra)
{
	for (int i = 0; i < 26; i++)
	{
		if (array[i] == letra)
		{
		 return i;
		}
	}
	return -1;
}
