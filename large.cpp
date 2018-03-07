#include<iostream>
using namespace std; 
int main ()
{
    int n[5];
    int i,j,desc;
    cout<<"\n Enter 5 Numbers : \n";
    cout<<" ";
    for (i = 0; i < 5; ++i)
    cin>>n[i];
    for (i = 0; i < 5; ++i) 
    {	
        for (j = i + 1; j < 5; ++j)
        {
            if (n[i] < n[j])
            {
                desc = n[i];
                n[i] = n[j];
                n[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 5; ++i)
    {
        cout<<" ";
        cout<<n[i];
        cout<<"\n";
    }
}
