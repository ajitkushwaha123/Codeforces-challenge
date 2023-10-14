#include<bits/stdc++.h>
using namespace std;
int main()
{
    char t;
    cin>>t;

    string s;
    cin>>s;

    vector<char> v;

    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for(int i= 0; i<s.length() ; i++)
    {
      if(t == 'R')
        {

        for(int j= 1; j<a.length() ; j++)
        {
                if(s[i] == a[j])
                {
                    v.push_back(a[j-1]);
                }
        
        }
        }

        else if(t == 'L')
        {
            for(int j= 0; j<a.length() - 1; j++)
            {
                if(s[i] == a[j])
                {
                    v.push_back(a[j+1]);
                }
            }
        }
    }



    for(int i= 0; i<v.size() ; i++)
    {
        cout<<v[i];
    }
}