#include<iostream>
#include<string>
using namespace std;

int main() {
char b[50];
cout<<"enter the string:\n";
cin.get(b,50);
strrev(b);
cout<<"\n the string u enter:"<<b;
cout<<"\n the reverse of string"<<b;
return 0;
}
