#include <iostream>
using namespace std;

int main() {
    int a,b,i,temp;
    cout<< "Enter two numbers: ";
    cin>>a>>b;
    cout << "Prime numbers between"<<a<<" and "<<b<<"are: ";
    while(a<b)
    {
        temp=0;
        for(i=2;i<=a/2;++i)
        {
            if(a%i==0)
            {
                temp=1;
                break;
            }
        }
}
        if (temp==0)
    {
        cout<<a<<" ";
        ++a;
    }
	return 0;
}
