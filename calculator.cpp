#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"Enter a number:";
	cin>>num1;
	cout<<"Enter the operator:";
	cin>>op;
	cout<<"Enter a number:";
	cin>>num2;
	switch(op)
	{
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<num1+num2;
			break;
		case '*':
			cout<<num1<<"X"<<num2<<"="<<num1*num2;
			break;
		case '/':
			if(num2==0){
				cout<<"Divisor cannot be zero";
			}
			else{
				cout<<num1<<"/"<<num2<<"="<<num1/num2;
			}
	}
	return 0;
}
