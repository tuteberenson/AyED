#include <iostream>
#include <string>

using namespace std;
char convertir(char);

int main(int argc, char *argv[]) {

	string frase, fraseNueva;

	cout << "Ingrese una frase \n";
	
	getline(std::cin, frase);
	
	//Uso una funcion que cree yo pero tambien podría usar las de 
	//C++ --> LowerCase - UpperCase
	for (int i = 0; i < frase.length(); i++)
	{
		fraseNueva += convertir(frase[i]);
		
	}
	cout << fraseNueva;
	return 0;
}

char convertir (char letra)
{
	char devolver;
	switch (letra)
	{
		case 'a':
			devolver= 'A';
		break;
				case 'b':
			devolver= 'B';
		break;
				case 'c':
			devolver= 'C';
		break;
				case 'd':
			devolver= 'D';
		break;	
			case 'e':
			devolver= 'E';
		break;		
		case 'f':
			devolver= 'F';
		break;		
		case 'g':
			devolver= 'G';
		break;
				case 'h':
			devolver= 'H';
		break;
				case 'i':
			devolver= 'I';
		break;
				case 'j':
			devolver= 'J';
		break;
				case 'k':
			devolver= 'K';
		break;
				case 'l':
			devolver= 'L';
		break;
				case 'm':
			devolver= 'M';
		break;
				case 'n':
			devolver= 'N';
		break;
				case 'o':
			devolver= 'O';
		break;
				case 'p':
			devolver= 'P';
		break;
				case 'q':
			devolver= 'Q';
		break;
				case 'r':
			devolver= 'R';
		break;
				case 's':
			devolver= 'S';
		break;
				case 't':
			devolver= 'T';
		break;
				case 'u':
			devolver= 'U';
		break;
				case 'v':
			devolver= 'V';
		break;
				case 'w':
			devolver= 'W';
		break;
				case 'x':
			devolver= 'x';
		break;
				case 'y':
			devolver= 'Y';
		break;
				case 'z':
			devolver= 'Z';
		break;
		case 'A':
			devolver= 'a';
		break;
				case 'B':
			devolver= 'b';
		break;
				case 'C':
			devolver= 'c';
		break;
				case 'D':
			devolver= 'd';
		break;	
			case 'E':
			devolver= 'e';
		break;		
		case 'F':
			devolver= 'f';
		break;		
		case 'G':
			devolver= 'g';
		break;
				case 'H':
			devolver= 'h';
		break;
				case 'I':
			devolver= 'i';
		break;
				case 'J':
			devolver= 'j';
		break;
				case 'K':
			devolver= 'k';
		break;
				case 'L':
			devolver= 'l';
		break;
				case 'M':
			devolver= 'm';
		break;
				case 'N':
			devolver= 'n';
		break;
				case 'O':
			devolver= 'o';
		break;
				case 'P':
			devolver= 'p';
		break;
				case 'Q':
			devolver= 'q';
		break;
				case 'R':
			devolver= 'r';
		break;
				case 'S':
			devolver= 's';
		break;
				case 'T':
			devolver= 't';
		break;
				case 'U':
			devolver= 'u';
		break;
				case 'V':
			devolver= 'v';
		break;
				case 'W':
			devolver= 'w';
		break;
				case 'X':
			devolver= 'x';
		break;
				case 'Y':
			devolver= 'y';
		break;
				case 'Z':
			devolver= 'z';
		break;
				default:
			devolver= ' ';
		break;
		
	}
	return devolver;

}
