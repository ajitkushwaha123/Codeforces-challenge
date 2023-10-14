#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;

    vector<long long> v;
    for(long long i = 0; i<n ; i++)
    {
        long long ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<pair<long long ,long long>> p;

    for(long long i= 0; i< m ; i++)
    {
        long long a,b;
        cin>>a>>b;

        p.push_back(make_pair(a,b));
    }

    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());

    long long sum = 0;

    vector<long long> sneha;

    for(long long i = 0; i<p.size() ; i++)
    {
        for(long long j = 0 ; j<p[i].first ; j++)
        {
            sneha.push_back(v[j]);
        }

        sort(sneha.begin() , sneha.end());

        for(long long j = 0; j<p[i].second ; j++)
        {
            sum += sneha[j];
        }

        cout<<sum<<endl;

        sneha.clear();
        sum = 0;
    }
}