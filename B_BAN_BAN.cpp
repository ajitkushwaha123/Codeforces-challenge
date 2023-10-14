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

        int ans = 0;

       cout<<n/2 + n%2<<endl;

       int l = 1;
       int r = 3*n-1;

       while(l<r)
       {
            cout<<l<<" "<<r<<" ";

            l += 3;
            r -= 3;
       }cout<<endl;
    }
}