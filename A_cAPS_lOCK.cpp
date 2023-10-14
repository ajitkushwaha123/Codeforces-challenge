#include<bits/stdc++.h>
using namespace std;
int main()
{

    //65 and 90

    //97 and 122

    // char a = 'z';
    // cout<<int(a)<<endl;

    string s;
    cin>>s;

    int count =0;

    for(int i=0; i<s.length() ; i++)
    {
        if(int(s[i]) >= 65 && int(s[i]) <= 90)
        {
            count++;
        }
    }

    if(count == s.length())
    {

      //  cout<<s[0];
        for(int i= 0; i<s.length() ; i++)
        {
            cout<<char(int(s[i]) + 32);
        }
    }

    else if(count == s.length() - 1 && (int(s[0]) >= 97 && int(s[0]) <=122))
    {
        cout<<char(int(s[0]) - 32);


        for(int i = 1; i<s.length() ; i++)
        {
            cout<<char(int(s[i]) + 32);
        }
    }

    else
    {
        cout<<s<<endl;
    }

}