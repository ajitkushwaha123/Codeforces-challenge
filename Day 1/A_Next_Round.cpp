#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> v;

    for(int i = 0; i<n  ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int x = v[k-1];

    sort(v.begin() , v.end());

    int ans = 0;

    for(int i = 0; i<n  ; i++)
    {
        if(v[i] >= x && v[i] > 0)
        {
            ans++;
        }
    }

    cout<<ans<<endl;
}