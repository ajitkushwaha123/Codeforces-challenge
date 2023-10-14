#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;

        int arr[n][m];

        vector<pair<int , int>> p;

        vector<vector<int>> v;
    
        for(int i = 0; i<n ; i++)
        {

            vector<int> row;

            for(int j= 0; j< m ;j++)
            {
                int ele;
                cin>>ele;

                row.push_back(ele);
            }

            sort(row.begin() , row.end());

            v.push_back(row);
        }







        int count = 0;
        int sum = 0;
        int index = 0;
        int sumMin = 0;

        int firstSum  = 0;
        int firstIndex = 0;

        for(int i= 0; i<n ;i++)
        {
            firstSum += v[0][i];
            firstIndex = i;

            if(firstSum > h)
            {
                firstSum -= v[0][i];
                firstIndex -= 1;
            }
        }

        int sumAns = firstSum;
       cout<<firstIndex<<endl;

        for(int i = firstIndex; i>0 ; i--)
        {
                firstSum -= v[0][i];
                sumAns += firstSum;
        }

      cout<<sumAns<<endl;

        

        for(int i = 0; i<n ; i++)
        {
            for(int j= 0; j< m ;j++)
            {
                sum += v[i][j];
    
                index = j;

                if(sum > h)
                {
                    sum -= v[i][j];
                    index -= 1;
                }
            }

            

            sumMin = sum;
            for(int j = index ; j>0 ; j--)
            {
                sumMin -= v[i][j];
                sum += sumMin;
            }

            cout<<index<<" "<<sum<<endl;

          
            // sumMin = sum;

            // for(int j = index +1 ; j>0 ; j--)
            // {
            //     sumMin -= v[i][j];
            //     sum += sumMin;
            // }

       //     cout<<sum<<endl;

    //  p.push_back(make_pair(index +1 , sum));
            sumMin = 0;
            sum = 0;
            index = 0;
        }


        // sort(p.begin() , p.end());
        // reverse(p.begin() , p.end());
















    // for(int i= 0; i<p.size() ; i++)
    // {
    //     cout<<p[i].first<<" "<<p[i].second<<endl;
    // }

        int same = 0;
        int position = 0;

        for(int i= 0; i<p.size() ; i++)
        {
            if(p[i].second == sumAns)
            {
                position = i+1;
                same = p[i].first;
            }
        }

        int countD = 0;

        for(int i =0; i<p.size() ; i++)

        {
            if(p[i].first == same)
            {
                countD++;
            }
        }

        cout<<position - countD + 1<<endl;

        
        
    }
}