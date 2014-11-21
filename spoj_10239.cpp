#include<iostream>
using namespace std;
int main()
{
    long int t,m,n,min,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        min=1000001;
        cin>>m;
        long int A[m];
        for(int j=0;j<m;j++)
            cin>>A[j];
            cin>>n;
            long int B[n];
        for(int j=0;j<n;j++)
            cin>>B[j];
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                s=A[j]-B[k];
                if(s>=0 && s<min)
                min=s;
                if((-1*s)>=0 && (-1*s)<min)
                min=(-1*s);
                if(min==0)
                break;
            }
            if(min==0)
                break;
        }
        cout<<min<<endl;
    }
}

