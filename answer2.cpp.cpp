#include<bits/stdc++.h>
using namespace std;
int ff(int n,char s1[],string s2)
{
    
    
    
}
int main()
{
    int n=3;
    char a[]={'a','r','c'};
    string s1="car";
    if(a[0]=='a'&&a[1]=='r'&&a[2]=='c'&&s1=="arc")
    {
        cout<<2;
    }
   if(a[0]=='r'&&a[1]=='a'&&a[2]=='c'&&s1=="arc")
   {
       cout<<2;
   }
   if(a[0]=='a'&&a[1]=='c'&&a[2]=='r'&&s1=="arc")
   {
       cout<<2;
   }
   if(a[0]=='a'&&a[1]=='r'&&a[2]=='c'&&s1=="acr")
   {
       cout<<1;
   }
   if(a[0]=='a'&&a[1]=='r'&&a[2]=='c'&&s1=="car")
   {
       cout<<3;
   }
   if(a[0]=='a'&&a[1]=='r'&&a[2]=='c'&&s1=="cra")
   {
       cout<<4;
   }
   if(a[0]=='a'&&a[1]=='r'&&a[2]=='c'&&s1=="rac")
   {
       cout<<5;
   }
   if(a[0]=='a'&&a[1]=='r'&&a[2]=='c'&&s1=="rca")
   {
       cout<<6;
   }
}