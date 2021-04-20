#include<iostream>

using namespace std;

int find_trailing_zeroes(int n)
{
  int fact=1,i=2,res=0;

  while(i<=n)
  {
      fact=fact*i;
      i++;
  }

  while(fact%10==0)
  {
      res++;
      fact=fact/10;
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