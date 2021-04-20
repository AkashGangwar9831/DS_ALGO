#include<iostream>

using namespace std;

int find_trailing_zeroes(int n)
{
  int res=0;
for(int i=5;i<=n;i*=5)
{
    res=res+n/i;
}
  
  return(res);
}

int main()
{
    int n;
    cin>>n;
    cout<<find_trailing_zeroes(n);
   

    return(0);
}