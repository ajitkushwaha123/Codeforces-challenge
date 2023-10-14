#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long n= 3;

        char arr[n][n];

        char ans = 'S' ;

        for(int i= 0; i<n ; i++)
        {
            for(int j = 0; j<n ; j++)
            {
                cin>>arr[i][j];
            }
        }
        
        // for(int i= 0; i<n ; i++)
        // {
        //     for(int j = 0; j<n ; j++)
        //     {
        //         cout<<arr[i][j];
        //     }

        //     cout<<endl;
        // }cout<<endl;

        for(int i= 0; i<n ; i++)
        {
            if(arr[i][0] == arr[i][1] &&  arr[i][1] == arr[i][2])
            {
                ans = arr[i][0];
            }
        }

        for(int i= 0; i<n ; i++)
        {
            if(arr[0][i] == arr[1][i] &&  arr[1][i] == arr[2][i])
            {
               ans = arr[0][i];
            }
        }

        for(int i= 0; i<n ; i++)
        {
            if(arr[i][i] == arr[i+1][i+1] && arr[i+1][i+1] == arr[i+2][i+2])
            {
                ans = arr[i][i];
            }
        }

        for(int i= 0; i<n ; i++)
        {
            if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
            {
               ans = arr[1][1];
            }
        }

        if(ans == 'X' || ans == 'O' || ans == '+')

        {
            cout<<ans<<endl;
        }

        else
        {
            cout<<"DRAW"<<endl;
        }

    }
}