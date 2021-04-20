#include<iostream>

using namespace std;

int factorial(int n)
{
    int res=1;
    if(n==0||n==1)
        return(res);
    for(int i=2;i<=n;i++)
    {
        res=res*i;
    }

    return(res);
}
//Akash
int main()
{
    int n;
    cin>>n;

    cout<<factorial(n);

    return(0);
}