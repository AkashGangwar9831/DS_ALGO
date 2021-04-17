#include<iostream>

using namespace std;


bool check_pallindrome(int n)
{
    int temp, rev=0,a;
    
    a=n;

    while(a!=0)
    {
        temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }
    if(n==rev)
        return(true);
        
    return(false);
    
}

int main()
{
    int n;
 
    cin>>n;
    if(check_pallindrome(n))
        cout<<"Pallindrome";
    else
        cout<<"Not a pallindrome";

    return(0);
}