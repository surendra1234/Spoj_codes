#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long int n,m,k,t,p,q,r;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n>>m>>k;
    if(n==1)
    p=0;
    else p=ceil((log10((double)n))/log10(2.0));
    if(m==1)
    q=0;
    else q=ceil((log10((double)m))/log10(2.0));
    if(k==1)
    r=0;
    else r=ceil((log10((double)k))/log10(2.0));
    cout<<"Case #"<<i+1<<": "<<(n-1)+n*((m-1)+m*(k-1))<<" "<<p+q+r<<endl;}
}
