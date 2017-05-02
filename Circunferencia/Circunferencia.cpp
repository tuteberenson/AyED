#include <iostream>	#include <iostream>
	using namespace std;
	
int main(int argc, char *argv[]) {
	
	int radio;
	double PI = 3.14159265;
	
	
	cout <<  "Ingrese un radio (cm) \n";
	cin >> radio;
	
	if(radio > 0)
	{
		cout << "Area: " << PI * radio * radio << " cm^2 \n" ;
		cout << "Perimetro: " << PI * radio * 2 << " cm \n" ;;
	}
	return 0;
}
