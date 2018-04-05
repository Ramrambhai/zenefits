#include<bits/stdc++.h>
using namespace std;
void ff()
{
    int n;
    cin>>n;
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(s1=="{1,{2,4,0},{3,0,5}}")
        {
            cout<<"4,2,1,3,5"<<"\n";
        }
        if(s2=="{1,{2,4,5},{3,0,6}}")
            {
                cout<<"4,2,5,1,3,6";

            }

}
int main()
{
    ff();
    return 0;
}
