#include<iostream>
#include<cmath>
using namespace std;
int dec(int a);
main()
{
	cout<<"Enter binary number to convert into decimal:";
	int a;
	cin>>a;
	int num= dec(a);
	cout<<num;
	
}
int dec(int a)
{
	int arr[999];
	int i=0; int num=0;
	int c=0;
	while(a!=0)
	{
		arr[i]=a%10;
		i++;
		a=a/10;
	}
	for(int j=i-1;j>=0;j--)
	{
		
		num+=arr[j]*pow(2,c);
		c++;
	}
	return num;
	
}
