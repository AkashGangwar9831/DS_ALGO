#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void prime_factor(int a)
{
    if(a<=1) exit(0);
    while(a%2==0){
        cout<<2<<" ";
        a=a/2;
    }
    while(a%3==0){
        cout<<3<<" ";
        a=a/3;
    }
   for(int i=5;i*i<=a;i=i+6)
   {
       while(a%i==0)
       {
           cout<<i<<" ";
           a=a/i;
       }
       while(a%(i+2)==0)
       {
           cout<<i+2<<" ";
           a=a/(i+2);
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