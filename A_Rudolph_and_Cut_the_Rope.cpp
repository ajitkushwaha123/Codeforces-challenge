#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n ; 

        vector<pair<int , int>> p;

        for(int i= 0; i<n ; i++)
        {
            int a,b;
            cin>>a>>b;

            p.push_back(make_pair(a,b));
        }

        int count= 0;

        for(int i= 0; i<p.size() ; i++)
        {
            if(p[i].first > p[i].second)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}