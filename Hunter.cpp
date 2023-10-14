#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<vector<int>> v;

    for(int i= 0; i<n ; i++)
    {

        vector<int> row;
        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            row.push_back(ele); 
        }

        v.push_back(row);
    }

    int countR =0 ;

    vector<int> ans ;



    for(int i= 0; i<n ; i++)
    {
        for(int j= 0; j<n ; j++)
        {
            if(v[i][j] == 1)
            {
                countR++;
            }
        }

        ans.push_back(countR);

    //    cout<<countR<<endl;
        countR = 0;
    }

    int countC = 0;

    for(int i= 0; i<n ; i++)
    {
        for(int j= 0; j<n ; j++)
        {
            if(v[j][i] == 1)
            {
                countC++;
            }
        }

        ans.push_back(countC);

     //   cout<<countC<<endl;
        countC = 0;
    }


    for(int i= 0; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
 
}