#include <iostream>
using namespace std;

int main() {
 int n1,n2,num,digit,sum;
cout<<"enter n1 and n2";
cin>>n1>>n2;
cout<<"the armstrong between tow number are:";
for(int i=n1;i<=n2;++i)
{
sum=0;
num=i;
for(;num>0;num/10)
{
	digit=num%10;
	sum=sum+digit*digit*digit;
}
if(sum==i)
{
	cout<<i;
}
return 0;
}
}
