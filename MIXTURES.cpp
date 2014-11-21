#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int smoke[100][100];
    int csum[100], colors[100];
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>colors[i];
            if(i) csum[i]=csum[i-1]+colors[i];
            else csum[i]=colors[i];
            smoke[i][i]=0;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                smoke[j][j+i-1]=2147483647;
                for(int k=j;k<j+i-1;k++)
                {
                    if(j) smoke[j][j+i-1]=min(smoke[j][j+i-1], smoke[j][k]+smoke[k+1][j+i-1]+((csum[k]-csum[j-1])%100)*((csum[j+i-1]-csum[k])%100));
                    else smoke[j][j+i-1]=min(smoke[j][j+i-1], smoke[j][k]+smoke[k+1][j+i-1]+((csum[k])%100)*((csum[j+i-1]-csum[k])%100));
                    //cout<<j<<" "<<j+i-1<<" "<<smoke[j][j+i-1]<<endl;
                }
            }
        }
        cout<<smoke[0][n-1]<<endl;
    }
}
