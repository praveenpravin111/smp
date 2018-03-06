#include <iostream>
using namespace std;

int main() {
    string s1[50],s2[20];
    int r[100];
    cout<<"\n enter first string";
    getline(cin,s1);
    cout<<".";
    getline(cin,s2);
    r=s1+s2;
    cout<<"\n the result string is: "<<r;
    return 0;
}
