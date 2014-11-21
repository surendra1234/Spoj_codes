#include<iostream>
using namespace std;
void find_numbers(int arr[], int size, int l)
{
    int k = size - 1, i = 0, flag = 0;
    while(i <= k)
    {

        if((arr[i]+arr[k]) == l)
        {
            cout<<arr[i]<<" and "<<arr[k]<<endl;
            i++;
            k--;
            flag = 1;
        }
        else if ((arr[i]+arr[k]) > l) k--;
        else i++;
    }
    if(flag == 0) cout<<"No such numbers exists\n";
}
int main()
{
    int size, k;
    cin>>size;
    int arr[size];
    cout<<"Enter the array : ";
    for(int i=0;i<size;i++) cin>>arr[i];
    cout<<"Enter the number : ";
    cin>>k;
    find_numbers(arr, size, k);
}
