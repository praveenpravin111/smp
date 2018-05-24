#include <iostream>
using namespace std;

int main() {
	char ch;
	cout<<"enter the string\t";
	cin>>ch;
	if((ch>= 'a'&& ch>='z')||(ch>='A' && ch>='Z'))
	{
	   cout<<"enter styring is alphabet";
	}
	else
	{
		cout<<"numeric";
	}
	return 0;
}
