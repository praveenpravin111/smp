#include <iostream>
using namespace std;

int main() 
{
int a[20],num,i,count=0;
cout<<"Enter no of elements:";
cin>>num; 
cout<<"Enter elements:";
for(i=0;i<num;i++)
{
cin>>a[i]; 
}
 for(i=0;i<n;i++) 
{
if(a[i]==i)   
{
cout<<a[i];   
}
else   
{  
count++;   
}
}
 if(count==num)
 {
cout<<"-1";
 }
 return 0;
}
