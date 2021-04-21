#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sieve(int a)
{
 vector<bool> isPrime(a+1, true);
 for(int i=2;i*i<=a;i++)
 {
     if(isPrime[i])
     {
         for(int j=2*i;j<=a;j=j+i)
            isPrime[j]=false;
     }
 }

 for(int i=2;i<=a;i++)
 {
     if(isPrime[i])
        cout<<i<<" ";
 }

}

int main()
{
    int a;
    cin>>a;
    sieve(a);
    return(0);
}