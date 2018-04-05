#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s1[]="{1,{2,4,0},{3,0,5}}";
    len=strlen(s1);
    len=len-1;
    char s2[]="{1,{2,4,5},{3,0,6}}";
    int len1=strlen(s2);
    len1=len1-1;
    int i=1,k=0;
    for(i=1;i<len;i++)
    {
        if(s1[i]=='{')
        {
            if(s1[i+3]!='0')
            {
                cout<<s1[i+3]<<",";
            }
            if(s1[i+1]!='0')
            {
                cout<<s1[i+1]<<",";
            }
            if(s1[i+5]!='0')
            {
                cout<<s1[i+5]<<",";
            }
            k=k+1;
            if(k==1)
            {
                cout<<s1[1]<<",";
            }
        }
    }
    int i=1,k=0;
    cout<<"\n";
    for(i=1;i<len1;i++)
    {
        if(s2[i]=='{')
        {
            if(s2[i+3]!='0')
            {
                cout<<s2[i+3]<<",";
            }
            if(s2[i+1]!='0')
            {
                cout<<s2[i+1]<<",";
            }
            if(s2[i+5]!='0')
            {
                cout<<s2[i+5]<<",";
            }
            k=k+1;
            if(k==1)
            {
                cout<<s2[1]<<",";
            }
        }
    }
    return 0;
}
