#include<iostream>
using namespace std;
void ser(int a);
int main()
{
	cout<<"Enter number for fibonacci series:";
	int a;
	cin>>a;
	ser(a);
	
}
void ser(int n)
{
	int a=0,b=1;
	int next;
	while(a<=n)
	{
		cout<<a<<" ";
		next=a+b;
		a=b;
		b=next;
	}
}
