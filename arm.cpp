int n,a,b=0,num;
cout<<"enter n";
cin>>n;
num=n;
while(n!=0)
{
a=n%10;
b=b+(a*a*a);
n=n/10;
}
if(b==num)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}
