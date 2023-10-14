#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int upper = 0, lower = 0;

    for(int i=0; i<s.length() ; i++)
    {
        if(int(s[i]) >= 97 && int(s[i]) <= 122)
        {
            upper++;
        }

        else
        {
            lower++;
        }
    }

    if(upper > lower)
    {
        for(int i=0; i<s.length() ; i++)
        {
            if(int(s[i]) >= 65 && int(s[i]) <= 92)
            {
                s[i] = char(int(s[i]) +  32);
            }

            cout<<s[i];
        }cout<<endl;
    }

    else if(upper == lower)
    {
        for(int i=0; i<s.length() ; i++)
        {
            if(int(s[i]) >= 65 && int(s[i]) <= 92)
            {
                s[i] = char(int(s[i]) +  32);
            }

            cout<<s[i];
        }cout<<endl;
    }

    else
    {
        for(int i=0; i<s.length() ; i++)
        {
            if(int(s[i]) >= 97 && int(s[i]) <= 122)
            {
                s[i] = char(int(s[i]) -  32);
            }

            cout<<s[i];
        }cout<<endl;
    }
}