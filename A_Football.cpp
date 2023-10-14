#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int countOne  = 0;
    int ansOne = 0;
    int countZero = 0;
    int ansZero = 0;

    for(int i= 0; i<s.length() ; i++)
    {
        if(s[i] == '1')
        {
            countOne++;
        }
        else
        {
            countOne = 0;
        }

        ansOne = max(ansOne , countOne);
    }

    for(int i= 0; i<s.length() ; i++)
    {
        if(s[i] == '0')
        {
            countZero++;
        }
        else
        {
            countZero = 0;
        }

        ansZero = max(ansZero , countZero);
    }

    if(ansZero >= 7 || ansOne >= 7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        
    }

}