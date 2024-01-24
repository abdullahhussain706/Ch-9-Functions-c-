#include<iostream>
using namespace std;
int reverse(int a);
main()
{
	cout<<"Enter a Number for reverse:";
	int a;
	cin>>a;
	reverse(a);
	
	
}
int reverse(int a)
{
	int arr[999];
	int i=0;
	while(a!=0)
	{
		arr[i]=a%10;
		i++;
		a=a/10;
	}
	for(int j=0;j<=i-1;j++)
	{
		cout<<arr[j];
	}
}
