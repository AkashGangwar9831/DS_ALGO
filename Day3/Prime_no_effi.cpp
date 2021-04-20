#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool Check_prime(int a)
{
  for(int i=2;i*i<a;i++)
  {
      if(a%i==0)
        return false;
  }
  return (true);
}

int main()
{
    int a;
    cin>>a;
    Check_prime(a)?cout<<"True":cout<<"False";
   

    return(0);
}