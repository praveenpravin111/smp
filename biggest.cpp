#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"\n enter three numbers:  \t";
	cin>>a>>b>>c;
	if(a>b)
	{
		cout<<"\n a is greater";
	}
	else if(b>c)
	{
		cout<<"\n b is greater";
	}
	else if(c>a)
	{
		cout<<"\n c is greater";
	}
	else
	{
		cout<<"\n invalid number";
	}
	return 0;
}
