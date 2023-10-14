#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string a,s;
        cin>>a>>s;

        int size = n;

        for(int i =0; i<m/n ; i++)
        {
            if(size <= m)
            {
                a+= a;
                size *= 2;
            }
            else
            {
                break;
            }
            
            size *= 2;
        }

        if(m % 2 != 0)
        {
           a += a;
        }

        cout<<a<<endl;
    }
}