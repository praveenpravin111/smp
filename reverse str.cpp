#include<iostream>
#include<string>
using namespace std;
int main()
{
int start,end,i,j=0,len,temp,count=0;
String s;
cout<<"Enter string:";
gets(s);
len=s.length();
for(i=0;i<len;i++)
{
for(start=j,end=j-1;start<(i+j)/2;start++;end--)
{
temp=s[start];
s[start]=s[end];
s[end]=temp;
}
j=i+1;
}
}
cout<<s<<"";
return 0;
}
