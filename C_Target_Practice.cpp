#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<vector<char>>v;

        for(int i= 0; i<10;  i++)
        {

            vector<char> row;

            for(int j =0; j<10 ; j++)
            {
                char ele;
                cin>>ele;

                row.push_back(ele);
            }

            v.push_back(row);
        }

        

        // for(int i= 0 ; i<10 ; i++)
        // {
        //     for(int j = 0; j<10 ; j++)
        //     {
        //         cout<<v[i][j]<<" "; 
        //     }cout<<endl;
        // }

        int value = 0;
        int sum = 0;

        for(int i= 0 ; i<10 ; i++)
        {
            for(int j = 0; j<10 ; j++)
            {
                if(((i == 0 )&& (j >= 0 && j<=9)) || ((i == 9) && (j>= 0 && j<=9)) || ((j == 0) && (i >= 0 && i<=9)) || (j == 9 && (i >= 0 && i <= 9)) )
                {
                    if(v[i][j] == 'X')
                    {
                        sum += 1;
                    } 
                }

                if(((i == 1 )&& (j >= 1 && j<=8)) || ((i == 8) && (j>= 1 && j<=8)) || ((j == 1) && (i >= 1 && i<=8)) || (j == 8 && (i >= 1 && i <= 8)) )
                {
                    if(v[i][j] == 'X')
                    {
                        sum += 2;
                    } 
                }

                if(((i == 2 )&& (j >= 2 && j<=7)) || ((i == 7) && (j>= 2 && j<=7)) || ((j == 2) && (i >= 2 && i<=7)) || (j == 7 && (i >= 2 && i <= 7)) )
                {
                    if(v[i][j] == 'X')
                    {
                        sum += 3;
                    } 
                }

                if(((i == 3 )&& (j >= 3 && j<=6)) || ((i == 6) && (j>= 3 && j<=6)) || ((j == 3) && (i >= 3 && i<=6)) || (j == 6 && (i >= 3 && i <= 6)) )
                {
                    if(v[i][j] == 'X')
                    {
                        sum += 4;
                    } 
                }

                if(((i == 4 )&& (j >= 4 && j<=5)) || ((i == 5) && (j>= 4 && j<=5)) || ((j == 4) && (i >= 4 && i<=5)) || (j == 5 && (i >= 4 && i <= 5)) )
                {
                    if(v[i][j] == 'X')
                    {
                        sum += 5;
                    } 
                }


                 

                // if(i == 3 || i == 6 || j == 3 || j == 6)
                // {
                //     if(v[i][j] == 'X')
                //     {
                //         sum += 4;
                //     } 
                // }    

                // if(i == 4 || i == 5 || j == 4 || j == 5)
                // {
                //     if(v[i][j] == 'X')
                //     {
                //         sum += 5;
                //     } 
                // }                
            }
        }

        cout<<sum<<endl;

    }
}