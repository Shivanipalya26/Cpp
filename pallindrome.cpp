#include<iostream>
using namespace std;

int main()
{
    int n,r,rev=0,m;
    cout<<"Enter a num:";
    cin>>n;
    m=n;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    cout<<"Reverse of given number is "<<rev<<endl;
    if(m==rev) cout<<"Entered number is pallindrome";
    else cout<<"Entered number is not a pallindrome";
}