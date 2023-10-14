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

        vector<int> v;

        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin() , v.end());

        v[0] = v[0] + 1;

        int product = 1;

        for(int i =0; i<n ; i++)
        {
            product *= v[i];
        }

        cout<<product<<endl;
    }
}