#include<stdio.h>
#include<string>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
long long int a[1000005];
long long int sum(long long int n)
{
    if(n<1000005)
    {
    	if(n<11)
    	{
    		a[n]=n;
    		return a[n];
    	}
    	else
    	{
    		if(a[n]==0)
    		{
    			a[n]=max(n,sum(n/2)+sum(n/3)+sum(n/4));
    			return a[n];
    		}
    		else
    			return a[n];
    	}
    }
    else
        return max(n,sum(n/2)+sum(n/3)+sum(n/4));
}
int main()
{
    long long int num;
    while(scanf("%lld",&num)!=EOF)
    {
        printf("%lld\n",sum(num));
    }
}

