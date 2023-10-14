#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long a,b;
        cin>>a>>b;

       unsigned int m = 1000000007;

  //     2*a + b+1

       long long ans1= ((2%m) * (a%m))%m;

       ans1 = (((ans1%m) + (b%m) + (1%m)%m)%m);
     
        long long ans2= ((3%m) * (b%m))%m;

       ans2 = (((ans2%m) + (a%m) + (1%m)%m)%m);
    
      //  ans2 += a + 1;


        cout<<ans1<<endl<<ans2<<endl;
    }
}