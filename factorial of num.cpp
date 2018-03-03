#include <iostream>
using namespace std;

int main() {
	int n,fact;
	cout<<"enter the number: ";
	cin>>n;
	for(int i=0;i<=n;++i)
	{
		fact=fact*i;
	}
	cout<<"\n the factorial of given number is: ";
	return 0;
}
