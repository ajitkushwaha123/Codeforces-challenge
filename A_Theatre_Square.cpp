#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;

    long long ans = 0;

    if(n%a == 0)
    {
        ans = n/a;
    }
    else
    {
        ans = (n/a)+1;
    }

    long long an= 0;

    if(m%a == 0)
    {
        an = m/a;
    }
    else
    {
        an = m/a + 1;
    }

    long long out = ans*an;

    cout<<out<<endl;
}