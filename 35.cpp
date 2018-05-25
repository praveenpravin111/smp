
#include <iostream>
using namespace std;

int main()
{
    string s;
    int i;
    getline(cin,s);
    int count=0;
    for (i=0;i<s.length();i++)
        {
         if (s[i]>'0'&&s[i]<'9')
          {
           count++;
          }
        }
        cout<<count;
    return 0;
}
