#include <iostream>
using namespace std;
int main() {
char ch;
cout<<"\nenter the word:  ";
cin>>ch;
if(( ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'b'))
{
	cout<<"\n entered word is alphabet";
}
else
{
	cout<<"\n entered word is not alphabet";
}
	return 0;
}
