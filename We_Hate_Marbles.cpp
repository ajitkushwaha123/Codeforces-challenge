#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  n;
        cin>>n;

        string s;
        cin>>s;

        int count = 0;

        for(int i= 0; i<s.length() -1 ;i++)
        {
            if(s[i] == '1' &&  s[i+1] == '1')
            {
                count++;
            }
        }

        if(count > 0 )
        {
            cout<<"False"<<endl;
        }
        else
        {
            cout<<"True"<<endl;
        }
    }
}