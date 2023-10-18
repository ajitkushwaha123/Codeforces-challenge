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


        //32 one 10 two 11

        int one = 0 , two = 0;

        one = n/3;
        two = n/3;

        n = n - (3*one);

        if(n == 2)
        {
            two += 1;
        }
        else if(n == 1)
        {
            one += 1;
        }

        cout<<one<<" "<<two<<endl;
    }
}