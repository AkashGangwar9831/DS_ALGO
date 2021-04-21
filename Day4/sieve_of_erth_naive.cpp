#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int a)
{
    if(a==0||a==1) 
        return(false);
    if(a==2 || a==3) 
        return(true);
    if(a%2==0 || a%3==0) 
        return(false);
  for(int i=5;i*i<=a;i=i+6)
  {
      if(a%i==0 || a%(i+2)==0)
        return(false);
  }
  return (true);
}

void print_Prime(int a)
{
    for(int i=2;i<=a;i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }
}

int main()
{
    int a;
    cin>>a;
    print_Prime(a);
    return(0);
}