#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char arr[8][8];

        for(int i= 0; i<8 ; i++)
        {
            for(int j= 0 ; j<8 ; j++)
            {
                cin>>arr[i][j];
            }
        }

        int count = 0;
        char ans;

        for(int i= 0; i<8 ; i++)
        {
            char ch = 'R';
            for(int j= 0 ; j<8 ; j++)
            {
                if(ch == arr[i][j])
                {
                    count++;
                }
            }

            if(count == 8)
            {
                ans = 'R';
            }
                count = 0;

        }

        for(int i= 0; i<8 ; i++)
        {
            char ch = 'B';
            for(int j= 0 ; j<8 ; j++)
            {
                if(ch == arr[j][i])
                {
                    count++;
                }
            }

            if(count == 8)
            {
                ans = 'B';
            }
                count = 0;

        }

        cout<<ans<<endl;


        // for(int i= 0; i<8 ; i++)
        // {
        //     for(int j= 0 ; j<8 ; j++)
        //     {
        //          cout<<arr[i][j];
        //     }cout<<endl;
        // }cout<<endl;
    }
}