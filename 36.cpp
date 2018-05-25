#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
    string str;
    int c=0,i;
    getline(cin, str);
    for(i=0;i<str.length();i++)
    {
    if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
    {
        continue;
    }
    else
    {
        c++;
    }
}
cout<<c;
return 0;
}
