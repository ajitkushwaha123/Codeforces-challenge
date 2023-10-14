#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(int(s[0]) >= 96)
    {
        cout<<char(int(s[0]) - 32);
        for(int i=1; i<s.length() ; i++)
        {
            cout<<s[i];
        }cout<<endl;
     }
     else{
        cout<<s<<endl;
     }

    //cout<<s<<endl;
}