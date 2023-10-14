#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n ;
        char a;
        cin>>n>>a;

        string s;
        cin>>s;

        int aIndex = -1;
        int gIndex = -1;

        vector<pair<int , int>>p;

        for(int i= 0 ; i<s.length() ; i++)
        {
            if(s[i] == a)
            {
                aIndex = i;
            }

            if(s[i] == 'g')
            {
                gIndex = i;
            }

       //     cout<<aIndex<<" "<<gIndex<<endl;

            p.push_back(make_pair(aIndex , gIndex));
        }cout<<endl;

        int mina = p[p.size() - 1].first;
        int maxa = p[p.size() - 1].first;
        int ming = p[p.size() - 1].second;
        int maxg = p[p.size() - 1].second;

        for(int i= 0; i<p.size() ; i++)
        {
            if(p[i].first <= mina && p[i].first != -1)
            {
                mina = p[i].first;
            }
            
            if(p[i].first >= maxa && p[i].first != -1)
            {
                maxa = p[i].first;
            }

            if(p[i].second <= ming && p[i].second != -1)
            {
                ming = p[i].second;
            }
            
            if(p[i].second >= maxg && p[i].second != -1)
            {
                maxg = p[i].second;
            }
        }

        int ans = 0;

        ans = maxg - mina;
        int result = 0;

       
            result = max(ans , n - maxa + mina);
        
      

        cout<<result<<endl;
        cout<<mina<<" "<<maxa<<" "<<ming<<" "<<maxg<<endl;
    }
}