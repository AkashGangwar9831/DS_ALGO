#include<iostream>

using namespace std;

int GCD_EUCLIDEAN(int a,int b)
{
   if(b==0)
        return(a);
    else
        return(GCD_EUCLIDEAN(b,a%b));
}

int main()
{
    int a,b;

    cin>>a>>b;

    cout<<GCD_EUCLIDEAN(a,b);


    return(0);
}