#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c,y,r,q,a[100000];
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        c=s.length();
        for(int j=0;j<c;j++)
        {
            a[j]=s[c-1-j]-'0';
        }
        while (1)
        {
            r=0;
            a[0]++;
            for(int j=0;j<c;j++)
            {
                q=a[j];
                a[j]=((q+r)%10);
                r=(q+r)/10;
                if(r==0)
                    break;
            }
            if(r>0)
            {
                a[c]=1;
                c++;
            }
            y=0;
            for(int j=0;j<c/2;j++)
            {
                if(a[j]==a[c-1-j])
                {
                    y++;
                }
            }
            if(y==c/2)
            {
                for(int j=0;j<c;j++)
                    cout<<a[j];
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
