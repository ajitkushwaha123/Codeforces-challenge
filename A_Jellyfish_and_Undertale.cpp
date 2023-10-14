#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;

        vector<long long>  v;

        for(long long i= 0; i<n ; i++)

        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin()  , v.end());
        long long sum = min(a , b);

       for(long long i= 0; i<n ; i++)
       {
          sum += min(a-1 , v[i]);
       }

        cout<<sum<<endl;
    }
}