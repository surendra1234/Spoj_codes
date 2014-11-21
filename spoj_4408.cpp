#include <cstring>
#include <string>
#include <cstdio>
#include<cmath>
#include <iostream>
using namespace std;
int main()
{
    float l;
    while(1){
    scanf("%f",&l);
    if(l==0) return 0;
    printf("%.2lf\n",l*l/(2*acos(-1.0)));
    }
}
