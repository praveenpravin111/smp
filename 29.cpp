#include<iostream>
using namespace std;

int main()
{
    int min,hr,m;
    cin>>min;
    hr=min/60;
    m=min%60;
    cout<<hr<<" ";
    cout<<m;
    return 0;
}
