#include<iostream>
using namespace std;
 
void buildLowestNumberRec(string str, int num, string &res)
{
    if (num == 0)
    {
        res.append(str);
        return;
    }
 
    int len = str.length();
    
    if (len <= num)
        return;
 
  
    int minIndex = 0;
    for (int i = 1; i<=num ; i++)
        if (str[i] < str[minIndex])
            minIndex = i;
 
    
    res.push_back(str[minIndex]);
 
    
    string new_str = str.substr(minIndex+1, len-minIndex);
 
    
    buildLowestNumberRec(new_str, n-minIndex, res);
}
 

string buildLowestNumber(string str, int num)
{
    string res = "";
 
    
    buildLowestNumberRec(str, num, res);
 
    return res;
}
 

int main()
{
    string str[1000];
    int num;
    cout<<"Enter number:";
    cin>>str;
    cout<<"Enter no.of.digits to be removed";
    cin>>num;
    cout << buildLowestNumber(str, num);
    return 0;
}
