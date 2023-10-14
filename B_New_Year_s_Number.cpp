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

        int m = n%2020;
        int s = n/2020;

        if(m == 0 && n > 2019)
        {
            cout<<"YES"<<endl;
        }
        else if (m <= s && n > 2019)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }

        


    //    else if()

    }
}