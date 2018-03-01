#include <iostream>
using namespace std;

int main() {
	int num,i;
	bool isprime=true;
	cout<<"enter the number:";
	cin>>num;
	for(i=2;i<=num/2;++i)
	{
		if(num%i==0)
		isprime=false;
		break;
	}
	if(isprime)
	{
		cout<<"\nthe number is prime";
	}
	else
	{
		cout<<"\nno it is not prime";
	}
	return 0;
}
