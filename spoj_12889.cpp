#include<iostream>
#include<cmath>
#include<string>
#include<stdio.h>
using namespace std;
void sort(int a[],int n)
{
    int inc = n/2;
        while(inc>0){
        for(int k=inc;k<n;k++){
        int tmp = a[k];
        int j = k;
        while(j>=inc && a[j-inc]>tmp){
        a[j] = a[j-inc];
        j = j-inc;
        }
        a[j] = tmp;
        }
        inc = (inc /2);
        }
}
int main()
{
    int t,n,i,c,k;
    scanf("%d", &t);
    esc: while(t--)
    {
        scanf("%d", &n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        if(n==1)
        {
            printf("0\n");
            goto esc;
        }
        sort(a,n);
        i=1;k=0;
        while(i<n)
        {
            c=0;
            while(1)
            {
                if(a[i]==a[i-1])
                    c++;
                else
                    break;
                i++;
            }
            i++;
            if(c>k)
                k=c;
        }
        if((n/2)-k>0)
            printf("%d\n", (n/2)-k);
        else
            printf("0\n");
    }
}
