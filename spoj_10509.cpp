#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
long long int answer[1000001];
int main()
{
    long long int ans,last;
    answer[0]=0;
    answer[1]=2;
    ans=2;
    last=2;
    for(int i=2;i<1000001;i++)
    {
        ans=((last%1000007)+(3)+(ans%1000007))%1000007;
        last=((last%1000007)+(3))%1000007;
        answer[i]=ans;
    }
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<answer[n]<<endl;
    }
}
