#include <iostream>
using namespace std;
int main()
{
	char c;
	int isLowercasevowel, isUppercasevowel;
	cout<<"\nenter the word: \t";
	cin>>c;
	isLowercasevowel=( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUppercasevowel=( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	if(isLowercasevowel || isUppercasevowel)
	cout<<"\n  is vowels"<<c;
	else
	cout<<"\n  is  constant"<<c;
	return 0;
}
