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

        vector<char> v;

        for(int i=0; i<s.length()   ; i++)
        {
            v.push_back(s[i]);
        } 

        //  for(int i = 0; i<s.length() ; i++)
        // {
        //     cout<<v[i]<<" ";
        // }cout<<endl;

        v.erase(unique(v.begin() , v.end()) , v.end());

        vector<char> sneha;

        int p = v.size();

        sort(v.begin() , v.end());

        v.erase(unique(v.begin() , v.end()) , v.end());

        if(p == v.size())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}