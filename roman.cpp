#include <iostream>
#include<math>
using namespace std;

int main() {
int romanToInt(string n) 
int a=0;
map<char, int> roman;
roman['I'] = 1;
roman['V'] = 5;
roman['X'] = 10;
roman['L'] = 50;
roman['C'] = 100;
roman['D'] = 500;
roman['M'] = 1000;
for (int i = 0; i < n.length() - 1; i ++) {
int cur = roman[n[i]];
int next = roman[n[i + 1]];
if (cur >= next) {
v+= cur;
} 
else 
{
a-=cur;
}
}
return a roman[n[n.length()-1]];
return
