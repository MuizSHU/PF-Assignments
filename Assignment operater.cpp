#include<iostream>
using namespace std;
int main()
{
int no1, no2, no3, no5;
int no4=10; //Assignment statement
no1=no2=7; //Compound assingment statement
no3=no1+no2; //Compound assignment expression
no4*=no3;
no5=no4%no3;
printf ("Value in no1 is %d and no2 is %d\n" , no1,no2);
printf ("Value in no3 is %d and no4 is %d", no3,no4);
printf ("\nValue in no5 is %d", no5);
return 0;	
}