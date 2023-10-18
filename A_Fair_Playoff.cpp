#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if((max(a,c) == a && max(a , d) == a && max(b ,d) == b && max(b , c) == b) || 
        (max(a,c) == c && max(a , d) == d && max(b ,d) == d && max(b , c) == c))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}