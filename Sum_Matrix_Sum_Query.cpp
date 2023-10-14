#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,m;
    cin>>n>>m;

    long long arr[n][n];
    vector<int> v;

    for(long long i= 0; i<n ; i++)
    {
        for(long long j = 0; j<n ; j++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }
    }

    for(int i= 0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

    int sum = 0;

    for(int i= 0; i<m ; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int start = n*a + b;
        int end = n*c + d;

        int dif = d-a+1;

        int sum = 0;

        vector<int> s;

        cout<<start<<" "<<end<<endl;
        for(int j= start; j<=end ; j++)
        {
            if(j<=d)
            {
                sum += v[i];
            }
            else
            {
              
                j = n + 1 + a;
                d = dif*dif  -1;
            }
        }

    
        cout<<sum<<endl;

     

        // cout<<sum<<endl;
    }

}