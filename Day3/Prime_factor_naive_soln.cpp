#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool Check_prime(int a)
{
    if(a==1) return(false);
    if(a==2 || a==3) return(true);
    if(a%2==0 || a%3==0) return(false);
  for(int i=5;i*i<=a;i+=6)
  {
      if(a%i==0 || a%(i+2)==0)
        return false;
  }
  return (true);
}

int main()
{
    int a;
    cin>>a;
    for(int i=2;i<a;i++){

    if(Check_prime(i))
    {
        int x=i;
        while(a%x==0)
        {
            cout<<i<<" ";
            x=x*i;
        }
    }
    }
    
   

    return(0);
}