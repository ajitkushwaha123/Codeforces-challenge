#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int t1 = 0;
        int t2 = 0;

        vector<int> v;
        vector<int>  v2;

        if(n%2 != 0)
        {
            for(int i= 1 ; i<= n + 1; i*=2)
            {
                v.push_back(i);
            }

            for(int i= 0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
        }
    }
}