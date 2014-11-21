#include<iostream>
#include<string>
using namespace std;
int d[2][250001];
int lcs(string s1,string s2)
{
    int l1,l2,max=0;
    l1=s1.length();
    l2=s2.length();
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(s1[i]==s2[j])
            {
                d[1][j+1]=d[0][j]+1;
                if(d[1][j+1]>max)
                    max=d[1][j+1];
            }
        }
        for(int j=0;j<=l2;j++)
        {
            d[0][j]=d[1][j];
            d[1][j]=0;
        }
    }
    return max;
}
int main()
{
    string s,t;
    while(1)
    {
        cin>>s>>t;
        cout<<lcs(s,t)<<endl;
    }
}
