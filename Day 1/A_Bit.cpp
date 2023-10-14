#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int ans = 0;
    
    for(int i=0; i<t ; i++)
    {
        string s;
        cin>>s;
        
        int flag = 0;

        for(int j = 0; j<s.length() -1  ; j++)
        {
            if(s[j] == '+')
            {
                flag = 1;
            }
            else
            {
                flag = 2;
            }
        }

        if(flag == 1)
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }

    cout<<ans<<endl;
}

