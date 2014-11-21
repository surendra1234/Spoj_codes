#include<iostream>
using namespace std;
int main()
{
    int a,b,c,p,q;
    while(1)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            return 0;
        if(2*b==a+c){
            printf("AP ");
            printf("%d\n",2*c-b);}
        if(b*b==a*c){
            printf("GP ");
            printf("%d\n",b/a*c);}
    }
}
