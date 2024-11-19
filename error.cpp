#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int count = 5;
	
	for (int i = 1 ; i <= count ; i++)
	{
		sum += i;
	}
	
	cout<<"The sum of the first "<< count <<" numbers is: "<< sum << endl;
	
	return 0;
}
