#include <iostream>
#include <cstring>
#include<cmath>

using namespace std;

int main()
{
    int ysum[501][501], bsum[501][501];
    int m, n, x;
    cin>>n>>m;
    while(m && n)
    {
        for(int i=0;i<=n;i++) ysum[i][0]=0;
        for(int i=0;i<=m;i++) bsum[0][i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                ysum[i+1][j+1]=ysum[i+1][j]+x;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>x;
                bsum[i+1][j+1]=bsum[i][j+1]+x;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ysum[i+1][j+1]=max(ysum[i+1][j]+bsum[i][j], ysum[i][j+1]+ysum[i+1][j+1]);
            }
        }
        cout<<ysum[n][m]<<endl;
        cin>>n>>m;
    }
    return 0;
}
