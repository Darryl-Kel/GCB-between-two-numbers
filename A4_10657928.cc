#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	   return b;
	return gcd(b%a,a);
}
int main()
{
	int a=15, b=20;
	cout<<"GCD("<<a<<","<<b<<")="<<gcd(a,b)<<endl;
	
	a=35, b=40;
	cout<<"GCD("<<a<<","<<b<<")="<<gcd(a,b)<<endl;
	
	a=21, b=3;
	cout<<"GCD("<<a<<","<<b<<")="<<gcd(a,b)<<endl;
	
	return 0;
	}
