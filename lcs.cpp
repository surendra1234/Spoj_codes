#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int print_lcs(string s1,string s2,int m,int n)
{
    string s[m+1];
    int q;
    for(int i=1;i<=m;i++) s[i][0]='0';
    for(int i=0;i<=n;i++) s[0][i]='0';
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    if(s1[i]==s2[j])
       s[i+1][j+1]=(((s[i][j]-'0')+1)+'0');
    else
       s[i+1][j+1]=max(s[i][j+1],s[i+1][j]);}}
    return s[m][n]-'0';
}
int main()
{   int t;
    cin>>t;
    string s1,s2;
    for(int i=0;i<t;i++)
    {cin>>s1>>s2;cout<<print_lcs(s1,s2,s1.length(),s2.length())<<endl;}}
