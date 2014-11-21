#include<iostream>
#include<cmath>
using namespace std;

#define mod 1000000009

long long int cPow(int n)
{
    long long int ans1=1;
    int ans=1, p=n/15, q=n%15;
    while(p--)
        ans1=(ans1*(ans<<15))%mod;
    ans1=(ans1*(ans<<q))%mod;
    return ans1;
}

void find_maximum_sum(long long int arr[], int size)
{
    int zeros=0;
    long long int curr_max = 0, temp =arr[0];
    bool flag=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0) zeros++;
        if(arr[i] > 0)
        {
            curr_max += arr[i];
            flag=1;
        }
        temp = max(temp, arr[i]);
    }
    if(flag)
    {
        cout<<curr_max<<" "<<cPow(zeros)<<endl;
    }
    else if(zeros)
    {
         cout<<"0 "<<(cPow(zeros)-1+mod)%mod<<endl;
    }
    else
    {
        int tempC=0;
        for(int i=0;i<size;i++)
            if(arr[i]==temp) tempC++;
        cout<<temp<<" "<<tempC<<endl;
    }
}
int main()
{
    int arr_size, t;
    long long int arr[50001];
    cin>>t;
    for(int m=0;m<t;m++)
    {
        cin>>arr_size;
        for(int i=0;i<arr_size;i++) cin>>arr[i];
        find_maximum_sum(arr, arr_size);
    }
}
