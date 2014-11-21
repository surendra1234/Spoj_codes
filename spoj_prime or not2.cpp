#include<stdio.h>
#include<cmath>
using namespace std;
long long int b=((int)pow(2.0,63.0))-1;
long long int c=b+1;
int mod(int a,int b,int c)
{
    long long int x=1,y=a;
    while(b>0)
    {
        if(b%2==1)
        {
            x=(x*y)%c;
        }
        y=(y*y)%c;
        b/=2;
    }
    return x%c;
}
int main()
{
    int t;
    long long int a;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&a);
        if(mod(a,b,c)!=1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}
