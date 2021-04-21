#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sieve(int a)
{
 vector<bool> isPrime(a+1, true);
 for(int i=2;i<=a;i++)
 {
     if(isPrime[i])
        {
            cout<<i<<" ";
             //i*i added in place of 2*i
         for(int j=i*i;j<=a;j=j+i)
            isPrime[j]=false;
        }
 }

}

int main()
{
    int a;
    cin>>a;
    sieve(a);
    return(0);
}