#include <iostream>
using namespace std;

int main() {
int n,r,orig,rev=0;
cout<<"Enter a number: ";
cin>>n;
orig=n;
while(n!=0)
{
r=n%10;
rev=rev*10 + r;
n=n/10;
}
if(rev==orig)	
{
cout<<"Palindrome";
}
else
{
cout<<"Not Palindrome";
}	
	return 0;
}
