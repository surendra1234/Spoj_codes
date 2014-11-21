#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long long int addrec(int a[],int x,int b[],int y)
{
    int i=0,j=0,r=0,c[x+y];
    long long int q=0;
    while(i!=x && j!=y)
    {
        c[i]=(a[i]+b[i]+r)%10;
        r=(a[i]+b[i]+r)/10;
        i++;
        j++;
    }
    while(i!=x)
    {
        c[i]=(a[i]+r)%10;
        r=(a[i]+r)/10;
        i++;
    }
    while(j!=y)
    {
        c[j]=(b[j]+r)%10;
        r=(b[j]+r)/10;
        j++;
    }
    if(j>i)
    {
        int z=i;
        i=j;
        j=z;
    }
    if(r>0)
    {
        c[i]=r%10;
        i++;
    }
    int w=i;
    for(int k=0;k<w;k++)
    {
        q+=c[k]*pow(10.0,(double)i-1);
        i--;
    }
    return q;
}
int main()
{
    int l1,l2,n,p=1;
    cin>>n;
    string s1,s2;
    long long int d[n];
    for(int i=0;i<n;i++)
    {
        cin>>s1;
        cin>>s2;
        l1=s1.length();
        l2=s2.length();
        for(int j=l1-1;j>=0;j--)
        {
            if(s1[j]=='0')
                l1--;
            else
                break;
        }
        for(int j=l2-1;j>=0;j--)
        {
            if(s2[j]=='0')
                l2--;
            else
                break;
        }
        int a[l1],b[l2];
        for(int j=0;j<l1;j++)
        {
            a[j]=s1[j]-'0';
        }
        for(int j=0;j<l2;j++)
        {
            b[j]=s2[j]-'0';
        }
        d[i]=addrec(a,l1,b,l2);
    }
    for(int i=0;i<n;i++)
    {

        cout<<d[i];
        if(p<n)
        {
            cout<<endl;
            p++;
        }
    }
    return 0;
}
