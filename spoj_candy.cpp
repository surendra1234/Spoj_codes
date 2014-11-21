#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            return 0;
        int a[n],sum=0,out=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];}
        if(sum%n!=0)
        {
            printf("-1\n");
        }
        else
        {
            m=sum/n;
            for(int i=0;i<n;i++)
            {
                if(a[i]>m)
                    out+=a[i]-m;
            }
            printf("%d\n",out);
        }
    }
}
