#include <cstring>
#include <string>
#include <cstdio>
#include<cmath>
#include <iostream>
using namespace std;
int main()
{
    int t;
    long long int n,d,third,fourthlast,sum,out,c1,c2,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>third>>fourthlast>>sum;
        c1=third+fourthlast;
        c2=fourthlast-third;
        b=5*third+7*fourthlast+2*sum;
        n=(int)(b+(double)sqrt((b*b)-(48.0*c1*sum)))/(2*c1);
        d=(c2)/(n-6);
        cout<<n<<endl;
        out=third-2*d;
        for(int j=0;j<n;j++)
            {cout<<out<<" ";
            out+=d;}
        cout<<endl;
    }
}


