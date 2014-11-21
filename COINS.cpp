#include<iostream>
using namespace std;
unsigned long int a[60000000];
unsigned long int sum(long int n)
{
    if(n<60000000)
    {
        if(n<12) return n;
        if(a[n]==0)
            a[n]=sum(n/2)+sum(n/3)+sum(n/4);
        return a[n];
    }
    else
        return sum(n/2)+sum(n/3)+sum(n/4);

}
int main()
{
    long int num;
    while(cin>>num)
    {
        cout<<sum(num)<<endl;
    }
    return 0;
}
