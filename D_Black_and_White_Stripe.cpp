#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        int count = 0;

        vector<int> v;

        for(int i =0 ; i<k ; i++)
        {
            if(s[i] == 'W')
            {
                count++;
            }
        }

        int ans = count;
        int m = 0;

        for(int j = k ; j<n ; j++)
        {
            if(s[j] == 'W')
            {
                count++;
            }

            if(s[m] == 'W')
            {
                count--;
            }

            m++;
            ans = min(ans , count);
        }

        if(ans < 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}



// int main(){
//  ll n,m,i,j,t,k,l,o,c,e,mx=0,mn=1e18;

//  j=0;

//   k=0;
//   mn=j;
//   for(i=m;i<n;i++){
//    if(s[k]=='W'){
//      j--;
//    }
//    if(s[i]=='W'){
//      j++;
//    }
//    k++;
//    mn=min(mn,j);
//     }
//     cout<<mn<<endl;
// }
// }