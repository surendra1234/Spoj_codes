#include <cstring>
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;
void sort(char a[],int n)
{
    int inc = n/2;
        while(inc>0){
        for(int k=inc;k<n;k++){
        char tmp = a[k];
        int j = k;
        while(j>=inc && a[j-inc]>tmp){
        a[j] = a[j-inc];
        j = j-inc;
        }
        a[j] = tmp;
        }
        inc = (inc /2);
        }
}
int main()
{
    int length1,length2,i,j,n;
    char temp;
    char s1[1001],s2[1001];
    string s;
    while(cin>>s1 )
    {
        cin >>s2;
        s="\0";
        length1=strlen(s1);
        length2=strlen(s2);
        sort(s1,length1);
        sort(s2,length2);
        //Checking smaller string
        i=0,j=0;
        while(i<length1 && j<length2)
        {
            if(s1[i]==s2[j])
            {
                s+=s1[i];
                i++;
                j++;
            }
            else if(s1[i]>s2[j])
                j++;
            else
                i++;
        }
	cout<<s<<endl;
	if(cin.eof()){return 0;}
	}//Ending the program if its at the end of the file
}


