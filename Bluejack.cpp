#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int t;
    cin>>t;

    vector<string> v;
    
    while(t--)
    {
        string l;
        cin>>l;

        v.push_back(l);

    }

    vector<char> p;

    vector<vector<string>> ans;

    for(int i= 0; i<s.length()  -3 ; i++)
    {
        for(int j = i+2 ; j<s.length() - 1 ; j++)
        {
            p.push_back(s[i]);
            p.push_back(s[i+1]);
            p.push_back(s[j]);
            p.push_back(s[j]);
        }

        ans.push_back(p);
    }


}