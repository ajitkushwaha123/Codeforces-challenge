#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count = 0;

        for(int i=0; i < s.length() - 1 ; i++)
        {
            for(int j= i+2 ; j<s.length()  - 1 ; j++)
            {
                if((s[i] == s[j] && s[i+1] == s[j+1]) || s[i] == s[j-1] && s[j] == s[i+1])
                {
                    count++;
                }
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

      //  cout<<count<<endl;
    }
}