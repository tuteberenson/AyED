#include <cstdlib>
#include <iostream>

using namespace std;
void convertirANumerosRomanos(int);

int main()
{
	int n;
	cout<< "Ingrese un numero entre 1000 y 2011";
	cin >> n;
	if(n >= 1000 && n <= 2011)
	{
		convertirANumerosRomanos(n);
	}
	else
	{	
	cout<< "Ingrese un numero entre 1000 y 2011";	
	}
	return 0;

	
}
void convertirANumerosRomanos(int n)
{
	int m, c, d, e;
	string nrm, nrc, nrd, nre;
	
	
	
	
	m = n /1000;
		n -= m * 1000;
	while (m > 0)
	{
		nrm += "M";
		m--;
		}

	
	
	c = n/100;
		n -= c*100;
	while (c >0){
		 if (c < 4 ||(c > 5 && c <9))
		 {
		 nrc += "C";
		 c--;
		 }
		 if  (c == 4){
		 	 nrc = "CD";
		 	 c-=4;
		 	}
		 	if (c ==5){
		 		nrc = "D";
		 		c -= 5;
		 		}
		 		if( c== 9)
		 		{
		 			nrc = "MC";
		 			c -=9;
		 			}
		 
		}
	d= n/10;
	n -= d*10;
		while (d >0){
		 if (d < 4 || (d > 5 && d <9))
		 {
		 nrd += "X";
		 d--;
		 }
		 if  (d == 4){
		 	 nrd = "XL";
		 	 d-=4;
		 	}
		 	if (d ==5){
		 		nrd = "L";
		 		d -=5;
		 		}
		 		if (d==9)
		 		{
		 			nrd = "XC";
		 			d -=9;
		 			}
		}

	
	e =n;
	
	while (e >0){
		 if (e < 4 || (e > 5 && e <9))
		 {
		 nre += "I";
		 e--;
		 }
		 if  (e == 4){
		 	 nre = "IV";
		 	 e-=4;
		 	}
		 	if (e ==5){
		 		nre = "V";
		 		e -=5;
		 		}
		 		if (e==9)
		 		{
		 			nre = "IX";
		 			e -=9;
		 			}
		}
		
		cout << nrm << nrc << nrd << nre;
	
}

