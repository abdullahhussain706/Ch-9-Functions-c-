#include<iostream>
using namespace std;
int mul(int num1,int num2);
main()
{
	int num1,num2;
	cout<<"Enter 1st Number:"<<endl;
	cin>>num1;
	cout<<"Enter 2nd Number:";
	cin>>num2;
	int a=mul(num1, num2);
	if(a==0)
	{
		cout<<"1st number is multiple of 2nd.";
	}
	else
	{
		cout<<"1st number is not multiple of 2nd.";
	}
	
}
int mul(int num1,int num2)
{
	return num1%num2;
}
