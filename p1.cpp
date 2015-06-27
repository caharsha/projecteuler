#include<iostream>

/*	Project Euler
* 	1
* 	Harsha Ashokan Copparam
* 	27 June 2015
*/


using namespace std;
int main()
{
	int sum = 0;
	int i;
	for(i = 3; i < 1000; i+=3)
		sum = sum + i;
	for(i = 5; i < 1000; i+=5)
		sum = sum + i;
	for(i = 15; i < 1000; i+=15)
		sum = sum - i;
	cout<<sum;
	return 0;
}