#include<iostream>
#include<cmath>
#include<vector>

/*	Project Euler
* 	3 - alternate
* 	Harsha Ashokan Copparam
* 	27 June 2015
*/


using namespace std;

int main()
{
	long num = 600851475143;
	long i;
	long largest;
	vector<long> prime_num;
	vector<long>::iterator it;
	int flag;
	prime_num.push_back(2);
	for(i = 3; i < sqrt(600851475143); i++)
	{
		flag = 0;
		for(it = prime_num.begin(); it != prime_num.end(); it++)
			if(i % *it == 0)
				{
					flag = 1;
					break;
				}
		if(flag == 0)
			prime_num.push_back(i);
	}

	for(it = prime_num.begin(); it != prime_num.end(); it++)
		{
			if(num % *it == 0)
				largest = *it;
		}
	cout<<largest;

	return 0;
}