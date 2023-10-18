#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,a;
        cin>>n>>m>>a;

        if(a%n < m)
        {
            a -= (a%n);
            a -= (n-m);
            cout<<a<<endl;
        }
        else if(a%n == m)
        {
            cout<<a<<endl;
        }
        else
        {
            a -= (a%n) ;
            a += m;
            cout<<a<<endl;
        }
    }
}