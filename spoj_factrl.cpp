#include<iostream>
using namespace std;
int fact[101][170]={1};
void Fact()
{
    fact[1][0]=1;
    fact[1][1]=1;
    for(int i=2;i<=100;i++)
    {
        int carry=0,j;
        for(j=1;j<=fact[i-1][0];j++)
        {
            fact[i][j]=(fact[i-1][j]*i+carry)%10;
            carry=(fact[i-1][j]*i+carry)/10;
        }
        while(carry)
        {
            fact[i][j]=carry%10;
            carry/=10;
            j++;
        }
        fact[i][0]=j-1;
    }
}
int main()
{
    int size,n;
    cin>>size;
    Fact();
    for(int i=0;i<size;i++)
    {
        cin>>n;
        for(int i=fact[n][0];i>0;i--)
            cout<<fact[n][i];
        cout<<endl;
    }
    return 0;
}
