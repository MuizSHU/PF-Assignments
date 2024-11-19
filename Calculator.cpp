#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	
	cout<<"Enter Operator: +, -, *, /:";
	cin>> op;
	
	cout<<"Enter two operands: ";
	cin>>num1>>num2;
	
	switch(op)
	{
		case '+':
			cout<<num1 << " + "<<num2<< " = "<<num1+num2;
			break;
			
		case '-':
			cout<<num1 << " - "<<num2<< " = "<<num1-num2;
			break;
			
		case '*':
			cout<<num1 << " * "<<num2<< " = "<<num1*num2;
			break;
			
		case '/':
			cout<<num1 << " / "<<num2<< " = "<<num1/num2;
			break;
			
		default:
			//if the oprerator is other than =,-,*,/,error message is shown
			cout<<"Error! operator is not correct";
			break;
	}
	
	return 0;	


	
}