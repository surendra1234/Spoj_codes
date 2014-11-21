#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],x,c,l,p,q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        l=0;
        x=a[i];
        while(x>0)
        {
            c+=l;
            l++;
            x-=l;
        }
        if(l%2==0)
        {
            p=a[i]-c;
            q=l+1-p;
        }
        else
        {
            q=a[i]-c;
            p=l+1-q;
        }
        cout<<"TERM "<<a[i]<<" IS "<<p<<"/"<<q<<endl;
    }
    return 0;
}
