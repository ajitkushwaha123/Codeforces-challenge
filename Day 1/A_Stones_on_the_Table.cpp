#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    string s;
    cin>>s;

    vector<char> v;

    for(int i=0; i<s.length() ; i++)
    {
        v.push_back(s[i]);
    }

    v.erase(unique(v.begin() , v.end()) , v.end());

    cout<<s.length() - v.size()<<endl;

// for(int i=0; i<v.size() ; i++)
// {
//     cout<<v[i]<<" ";
// }
}