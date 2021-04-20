#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void prime_factor(int a)
{
    if(a<=1) exit(0);
   for(int i=2;i*i<=a;i++)
   {
       while(a%i==0)
       {
           cout<<i<<" ";
           a=a/i;
       }
   }
   if(a>1)
        cout<<a;
}

int main()
{
    int a;
    cin>>a;
    prime_factor(a);
    return(0);
}