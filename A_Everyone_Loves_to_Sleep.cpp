#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;

        vector<pair<int , int>> p;

        for (int i = 0; i < n ; i++)
        {
            int a,b;
            cin>>a>>b;

            p.push_back(make_pair(a,b));
        }

        int ans = 0;

        for (int i = 0; i < p.size(); i++)
        {
            if(h < p[i].first)
            {
                if(m > p[i].second)
                {
                        p[i].first = p[i].first-1;
                        p[i].second += 60;
                        cout<<p[i].first - h<<" "<<p[i].second - m<<endl;
                }
                else
                {
                    cout<<p[i].first-h<<" "<<p[i].second - m<<endl;
                }
            }
            else if(h > p[i].first)
            {
                if(m < p[i].second )
            }
        }

        


        
        
    }
}