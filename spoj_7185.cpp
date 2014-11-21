#include <stdio.h>
#include <stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
int maximum(int a,int b,int c,int d)
{
    return max(a,max(b,max(c,d)));
}
int main()
{
    int e,ebar,f,fbar,s,sbar,m,mbar,ans1,ans2,ans3,ans4,max,number1,number2,number3,number4;
    while(1){
        cin>>e>>f>>s>>m>>ebar>>fbar>>sbar>>mbar;
        if(e==(-1) && ebar==(-1) && f==(-1) && fbar==(-1) && s==(-1) && sbar==(-1) && m==(-1) && mbar==(-1)) return 0;
        if(e%ebar!=0) ans1=ebar-(e%ebar);
        else ans1=0;
        if(f%fbar!=0) ans2=fbar-(f%fbar);
        else ans2=0;
        if(s%sbar!=0) ans3=sbar-(s%sbar);
        else ans3=0;
        if(m%mbar!=0) ans4=mbar-(m%mbar);
        else ans4=0;
        number1=(ans1+e)/ebar;
        number2=(ans2+f)/fbar;
        number3=(ans3+s)/sbar;
        number4=(ans4+m)/mbar;
        max=maximum(number1,number2,number3,number4);
        ans1+=(max-number1)*ebar;
        ans2+=(max-number2)*fbar;
        ans3+=(max-number3)*sbar;
        ans4+=(max-number4)*mbar;
        cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
    }
}
