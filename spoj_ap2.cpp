#include <cstring>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int t;
    long long int n,d,third,thirdlast,sum,out;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>third>>thirdlast>>sum;
        n=sum*2/(third+thirdlast);
        d=(thirdlast-third)/(n-5);
        cout<<n<<endl;
        out=third-2*d;
        for(int j=0;j<n;j++)
            {cout<<out<<" ";
            out+=d;}
        cout<<endl;
    }
}
