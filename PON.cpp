#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>
#include<time.h>
using namespace std;

unsigned long long int mulmod(unsigned long long a,unsigned long long b,unsigned long long c)
{
    long long x = 0,y=a%c;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=x+y;
            if(x >=c) x=x-c;
        }
        y=y*2;
        if(y >=c) y=y-c;
        b /= 2;
    }
    return x;
}

long long int power(long long int a, long long int b, long long int mod)
{
    long long int x=1, y=a%mod;
    while(b)
    {
        if(b%2) x=mulmod(x,y,mod);
        y=mulmod(y,y,mod);
        b/=2;
    }
    return x;
}

bool fermit(long long int p, int iter)
{
    if(p==2 || p==3 || p==5) return true;
    if(p%2==0) return false;
    if(p%3==0) return false;
    if(p%5==0) return false;
    while(iter--)
    {
        srand(time(NULL));
        long long int a=rand()%(p-1)+1;
        if(power(a,p-1,p)!=1) return false;
    }
    return true;
}

int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(fermit(n, 3)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
