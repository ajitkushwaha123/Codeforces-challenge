#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n,m,k;
        cin>>n>>m>>k;

        vector<long long> a;
        vector<long long> s;

        long long sum = 0;

        for(long long i= 0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            a.push_back(ele);
        }

        for(long long i = 0; i<m ; i++)
        {
            long long ele;
            cin>>ele;

            s.push_back(ele);
        }

        sort(a.begin() , a.end());

        sort(s.begin() , s.end());

        for(long long i = 0; i<a.size() ; i++)
        {
            sum += a[i];
        }
        
        int minA  = a[0];
        int maxA = a[n-1];
        int minB = s[0];
        int maxB = s[m-1];

        if(k%2 == 0)
        {
            if(a[0] < s[m-1])
            {
                a.erase(a.begin() + 0);
                a.push_back(s[m-1]);
                s.erase
            }

            if(s[0] < a[m-1])
            {
                a[n-1] = s[0];
            }
        }
        else
        {
            if(minA < maxB)
            {
                a[0] = maxB;
            }
        }

        sum = 0;

        for(int i= 0 ; i<a.size() ; i++)
        {
            sum += a[i];
        }

        cout<<sum<<endl;


    }
}