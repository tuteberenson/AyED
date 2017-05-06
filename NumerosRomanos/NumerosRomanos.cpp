#include <cstdlib>
#include <iostream>

using namespace std;


int main()
{
	int n, m, c, d, e;
	string nrm, nrc, nrd, nre;
	
	cin >> n;
	
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
		
		while (d >0){
		 if (d < 4 || (d > 5 && d <9))
		 {
		 nrd += "X";
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
	d= n/10;
	n -= d*10;
	
	e =n;
	
	while (e >0){
		 if (e < 4 || (e > 5 && e <9))
		 {
		 nre += "I";
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
		
	return 0;

	
}
