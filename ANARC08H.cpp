#include <iostream>

using namespace std;

int main()
{
    int n,k, ans;
    cin>>n>>k;
    while(n && k)
    {
        ans=1;
        for(int i=2;i<=n;i++)
        {
            ans=(ans+k-1)%i+1;
        }
        cout<<n<<" "<<k<<" "<<ans<<endl;
        cin>>n>>k;
    }
    return 0;
}
