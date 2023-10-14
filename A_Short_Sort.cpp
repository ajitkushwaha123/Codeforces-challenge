#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)

    {
        string s;
        cin>>s;
        int count = 0;


        for(int i= 0 ; i<s.length() ; i++)
        {
            if(s[0] == 'a' || s[1] == 'b' || s[2]  == 'c')
            {
                count++;
            }
        }

        if(count > 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}