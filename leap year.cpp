#include <iostream>
using namespace std;
int main()
{
int year;    
cout <<"\n Enter the year: ";
cin>>year;
if(year%4 == 0)
cout<<"\n it is a leap year"<<year;
else
cout<<"\n it is not a leap year"<<year;
return 0;
}
