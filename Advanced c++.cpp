#include<iostream>
using namespace std;
bool isprime(int a)
{
	int i,c=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}
	if(c==0)
	{
		return true;
	}
}
int main()
{
	int a,b,i,n;
	cout<<"Enter a positive integer: ";
	cin>>n;
	for(i=2;i<=(n/2);i++)
	{
		a=i;
		b=n-i;
		if(isprime(a)&&isprime(b))
		{
			cout<<n<<" = "<<a<<" + "<<b<<endl;
		}
	}
	return 0;
}
