#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printDivisor(int a)
{
 int i=1;
 for(i=1;i*i<a;i++)
{
    if(a%i==0){
        cout<<i<<" ";
    }
}

 for(;i>=1;i--)
{
    if(a%i==0){
        cout<<(a/i)<<" ";
    }
}
  
}

int main()
{
    int a;
    cin>>a;
    printDivisor(a);
   

    return(0);
}