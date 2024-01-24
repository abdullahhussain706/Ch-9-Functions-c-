#include<iostream>
#include<cmath>
using namespace std;
int check(int a,int b,int c ,int d);
main()
{
	int a,b,c,d;
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"\nEnter 2nd number:";
	cin>>b;
	cout<<"\nEnter 3rd number:";
	cin>>c;
	cout<<"\nEnter 4th number:";
	cin>>d;
	cout<<check(a,b,c,d);
	
	
}
int check(int a,int b,int c ,int d)
{
	int sum,num;
	sum=pow(a,3)+pow(b,3)+pow(c,3);
	num=pow(d,3);
	if(sum==num)
	return 0;
	else
	return -1;
}
