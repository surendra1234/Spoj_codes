#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int n,r=1;
    long int ans=0;
    cin>>n;
    while(n/r-r+1>0)
    {
        ans+=n/r-r+1;
        r++;
    }
    cout<<ans<<endl;
}
