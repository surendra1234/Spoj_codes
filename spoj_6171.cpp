#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int size, flag = 0, t;
    cin>>t;
    while(t--) {
    cin>>size;
    int arr[size], arr1[1000001];
    for(int i=0;i<1000001;i++) arr1[i] = 0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0)
        arr1[arr[i]] += 1;
        else arr1[(-1*arr[i])] += 1;
    }
    for(int i=0;i<=1000001;i++)
    {
        if(arr1[i] >= (size/2)+1)
        {
            flag++;
            if(i<1004)
            {
                cout<<"Yes "<<i<<endl;
                break;
            }
            else
            {
                cout<<"Yes "<<1003-i<<endl;
                break;
            }
        }
    }
    if(flag == 0) cout<<"No \n";
}
}


