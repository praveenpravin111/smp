#include <iostream>
using namespace std;

int main() {
int a,n=0;
cout<<"\nenter the numbers";
cin>>n;
while(n>0)
{
	n=n/10;
	a++;
}
cout<<"\nno of digit you entered\t"<<a;
return 0;
}
