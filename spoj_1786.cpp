#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<string>
#include<iostream>
using namespace std;
//int j[99000001];
int main()
{
    int ans,n;
    string s;
    //char c[8];
    while(1){
        cin>>s;
        char c[(s[3]-'0')+2];
        if(s[0]=='0' && s[1]=='0' && s[3]=='0') return 0;
        c[0]=s[0];
        c[1]=s[1];
        for(int i=0;i<(s[3]-'0');i++)
            c[i+2]='0';
        n=atoi(c);
        ans=1+(2*n)-pow(2.0,(1+floor(log10((double)n)/log10(2.0))));
        cout<<ans<<endl;
    }
}
