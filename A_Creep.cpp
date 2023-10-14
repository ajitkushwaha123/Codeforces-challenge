#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        vector<int> v;

        if(a <= b)
        {
            for(int i= 0; i<a ; i++)
        {
            v.push_back(1);
            v.push_back(0);
        }

        for(int i= a; i<b ; i++)
        {
            v.push_back(1);
        }
        }
        else
        {
            for(int i= 0; i<b ; i++)
        {
            v.push_back(0);
            v.push_back(1);
        }

        for(int i= b; i<a ; i++)
        {
            v.push_back(0);
        }   
        }

        

        for(int i= 0; i<v.size() ; i++)
        {
            cout<<v[i];
        }cout<<endl;
    }
}