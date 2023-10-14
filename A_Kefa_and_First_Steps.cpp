#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i= 0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int count = 0;
    int ans = 0;

    for(int i= 0; i<v.size() - 1 ; i++)
    {
        if(v[i] <= v[i+1])
        {
            count++;
        }

        else
        {
            count = 0;
        }

        ans = max(ans , count);
    }

    cout<<ans+1<<endl;
}