#include<stdio.h>
using namespace std;
int main()
{
int x;
while(1)
{
    scanf("%d",&x);
    if(x!=42)
       printf("%d \n",x);
    else
       return 0;
}
}
