#include<iostream>
using namespace std;
int bin(int a,int arr[]);
int main()
{
	cout<<"Enter a number to convert binary:";
	int a;
	cin>>a;
	int arr[999];
	int size=bin(a,arr);
	for(int j=size-1;j>=0;j--)
	{
		cout<<arr[j];
	}
	return 0;
}
int bin(int a,int arr[])
{
	int i=0;
	while(a!=0)
	{
		
		arr[i]=a%2;
		i++;
		a=a/2;
	
	}
	return i;
}
