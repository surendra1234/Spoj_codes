#include <cstring>
#include <string>
#include <cstdio>
#include<cmath>
#include <iostream>
using namespace std;
char a[10000001];
int main()
{
    long long int number,temp,n,ans,p,q,m,temp2,ans2;
    ans=19;
    temp=12;
    n=2;
    a[1]='1';
    a[7]='1';
    while(ans<10000001)
    {
        a[ans]='1';
        p=temp/n;
        q=temp-p;
        temp=p*2+q;
        ans+=temp;
        n++;
    }
    do{
        cin>>number;
        if(number>10000000)
        {
            m=n;
            temp2=temp;
            ans2=ans;
            while(number>=ans2)
            {
                if(ans2==number && number!=-1)
                {
                    cout<<"Y\n";
                    break;
                }
                p=temp2/m;
                q=temp2-p;
                temp2=p*2+q;
                ans2+=temp2;
                m++;
            }
            if(ans2>number && number!=-1)
            cout<<"N\n";
        }
        else
        {
            if(a[number]=='1' && number!=-1) cout<<"Y\n";
            else if(number!=-1) cout<<"N\n";
        }
    }while(number!=-1);
}

