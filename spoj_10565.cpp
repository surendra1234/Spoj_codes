#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;
int flag[107];
int main()
{
    int t,n,m,ans,k;
    cin>>t;
    flag[1]=1;
    flag[0]=1;
    for(int i=0;i<t;i++){
    cin>>n;
    m=n;
    ans=0;
    while(n>1){
    for(int k=2;k<=floor(sqrt((double)n));k++){
    if(n%k==0){
    flag[k]=1;
    flag[n/k]=1;}}
    for(k=n-1;k>1;k--){
    if(flag[k]==0){
    break;}}
    n=k;}
    for(int l=2;l<=m;l++){
    if(flag[l]==0)
    ans++;}
    cout<<ans<<endl;}
}
