#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t,n,m,d,flag,amount,i;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        flag=0;
        i=0;
        cin>>n>>m>>d;
        int a[n];
        for(int j=0;j<n;j++) cin>>a[j];
        amount=m*d;
        while(i<n)
        {
            if(flag==1) break;
            if(amount<=0){
            flag=1;
            break;}
            while(a[i]>d)
            {
                a[i]-=d;
                amount-=d;
                if(amount<=0){
                flag=1;
                break;}
            }
            i++;
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
