#include<iostream>

using namespace std;

#define forl(i,n) for(int i=0; i<n;i++)
#define forx(i,x,n) for(int i=x; i<n;i++)

int main()
{
    long int brac[40][40];
    bool opbr[40];
    int t, n, k, pos;
    cin>>t;
    while(t--)
    {
    	forl(i,2*n+1)
    	{
    		forl(j,2*n+1) brac[i][j]=0;
    		opbr[i]=0;
    	}
        cin>>n>>k;
        forl(i,k)
        {
        	cin>>pos;
        	opbr[pos]=1;
        }
        brac[1][0]=0;
        forx(i,1,2*n+1) brac[i][i]=1;
        forx(i,2,2*n+1)
        {
            forl(j,i)
            {
                if(opbr[i])
                {
                    if(j) brac[i][j]=brac[i-1][j-1];
                    else brac[i][j]=0;
                }
                else
                {
                    if(j) brac[i][j]= brac[i-1][j-1]+brac[i-1][j+1];
                    else brac[i][j]= brac[i-1][j+1];
                }
                //cout<<i<<" "<<j<<" "<<brac[i][j]<<endl;
            }
        }
        cout<<brac[2*n][0]<<endl;
    }
}

