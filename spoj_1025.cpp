#include <cstring>
#include <string>
#include <cstdio>
#include<cmath>
#include <iostream>
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
    int t,n,result;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n],b[n];
        for(int j=0;j<n;j++) cin>>a[j];
        for(int j=0;j<n;j++) cin>>b[j];
        sort(a,n);
        sort(b,n);
        result=a[0]*b[0];
        for(int j=1;j<n;j++) result+=a[j]*b[j];
        cout<<result<<endl;
    }
}
