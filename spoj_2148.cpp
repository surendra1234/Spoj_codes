#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int m,n1,n2,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m;
        if(m>0)
        cin>>n1;
        ans=n1%m;
        for(int j=0;j<m-1;j++){
        cin>>n2;
        ans=(ans+(n2%m))%m;
        }
        if(ans==0)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}
