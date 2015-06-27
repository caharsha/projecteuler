#include<iostream>

/*	Project Euler
* 	2
* 	Harsha Ashokan Copparam
* 	27 June 2015
*/



using namespace std;
int main()
{
	long fibo = 0;
	long x1 = 1;
	long x2 = 2;
	long temp;
	
	while(x2 < 4000000)
	{
		cout<<x2<<" ";
		temp = x2;
		if(x2 % 2 == 0)
			fibo += x2;
		x2 = x1 + x2;
		x1 = temp;
	}

	cout<<fibo;



	return 0;
}
