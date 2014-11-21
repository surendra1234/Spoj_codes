#include<iostream>
using namespace std;
int inv_count[13][99];
/*for(int i=0;i<13;i++){
for(int j=0;j<99;j++)inv_count[i][j]=-1;}*/
int count(int n,int k)
{
    if(n==0) return 0;
    if(k==0) return 1;
    if(inv_count[n][k]!=0) return inv_count[n][k];
    int cnt=0;
    for(int i=0;i<n && k-i>=0;i++)
    cnt+=count(n-1,k-i);
    inv_count[n][k]=cnt;
    return cnt;
}
int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n>>k;
    cout<<count(n,k)<<endl;}
    //cout<<inv_count[2][3]<<endl;
}
