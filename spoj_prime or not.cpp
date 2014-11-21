#include<iostream>
#include<string>
using namespace std;
int main()
{
    int sum,k,t,l,p,a[6]={1,3,2,6,4,5};
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        sum=0;
        cin>>s;
        l=s.length();
        if((s[l-1]=='2' || s[l-1]=='3' || s[l-1]=='5' || s[l-1]=='7') && l==1){
            cout<<"YES"<<endl;
            continue;}
        p=s[l-1]-'0';
        if(p%2==0 || p%5==0){
            cout<<"NO"<<endl;
            continue;}
        for(int j=0;j<l;j++)
        {
            p=s[j]-'0';
            sum+=p;
        }
        if(sum%3==0){
            cout<<"NO"<<endl;
            continue;}
        k=0;
        sum=0;
        for(int j=l-1;j>=0l;j--)
        {
            p=s[j]-'0';
            sum+=p*a[k];
            k++;
            if(k==5)
                k=0;
        }
        if(sum%7==0){
            cout<<"NO"<<endl;
            continue;}
        cout<<"YES"<<endl;
    }
}
