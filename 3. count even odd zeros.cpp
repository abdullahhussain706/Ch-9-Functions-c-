#include<iostream>
using namespace std;
void count(int a);
main()
{
	int a;
	cout<<"Enter Number:";
	cin>>a;
	count(a);
	
}
void count(int a)
{
	int b;
	int even=0 , odd=0 , zeros=0;
	while(a!=0)
	{
		b=a%10;
		if(b%2==0)
		{
		even++;
		}
		else if(b==0)
		{
			zeros++;
		}
		else
		{
			odd++;
		}
		a=a/10;
	}
	cout<<"Number of Even="<<even<<endl;
	cout<<"Number of Odd="<<odd<<endl;
	cout<<"Number of Zeros="<<zeros<<endl;
	
}
