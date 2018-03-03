#include<iostream>
using namespace std;
 
int main()
{
    int n,num,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    num=n;
    while(num != 0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    cout<<val<<<< sum;
}
