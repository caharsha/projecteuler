#include<iostream>
#include<cmath>
#include<vector>

/*	Project Euler
* 	3
* 	Harsha Ashokan Copparam
* 	27 June 2015
*/




using namespace std;

int main()
{
	long num = 600851475143;
	long largest;
	long i;
	for(i=2; i<sqrt(600851475143); i++)
	{
		while(num%i == 0)
		{
			num = num / i;
			largest = i;
		}
	}
	cout<<largest;
	return 0;
}
