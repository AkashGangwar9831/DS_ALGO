#include<iostream>

using namespace std;

int count_dig(int n)
{
    if(n==0)
        return(0);
    return 1+count_dig(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<count_dig(n);
    return (0);
}