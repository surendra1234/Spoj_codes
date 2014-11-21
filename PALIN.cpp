#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c,y,r,q;
    char a[100005];
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        c=s.length();
        for(int j=0;j<c;j++)
        {
            a[j]=s[c-1-j];
        }
        for(int j=0;j<c;j++)
            cout<<a[c-1-j]-'0';
        cout<<endl;
        int carry=1, j=0, k=5;
        while(carry && k--)
        {
            cout<<(int)a[j]<<" "<<a[j]-'0'<<" "<<carry<<endl;
            a[j]+=carry;
            carry=(a[j]-'0')/10;
            a[j]=((a[j]-'0')%10)+'0';
            cout<<(int)a[j]<<" "<<a[j]-'0'<<" "<<carry<<endl;
            j++;
            if(j==c)
            {
                a[j]=carry+'0';
                carry--;
                c++;
            }
        }
        for(int j=0;j<c;j++)
            cout<<a[c-1-j]-'0';
        cout<<endl;
        for(int i=0;i<=(c/2)-1;i++)
        {
            if(a[i]>a[c-1-i])
            {
                int carry=1, j=i+1, k=5;
                while(carry && k--)
                {
                    cout<<(int)a[j]<<" "<<a[j]-'0'<<" "<<carry<<endl;
                    a[j]+=carry;
                    carry=(a[j]-'0')/10;
                    a[j]=((a[j]-'0')%10)+'0';
                    cout<<(int)a[j]<<" "<<a[j]-'0'<<" "<<carry<<endl;
                    j++;
                    if(j==c && carry)
                    {
                        a[j]=carry+'0';
                        carry--;
                        c++;
                    }
                }
            }
            a[i]=a[c-1-i];
        }
        for(int j=0;j<c;j++)
            cout<<a[c-1-j]-'0';
        cout<<endl;
    }
    return 0;
}
