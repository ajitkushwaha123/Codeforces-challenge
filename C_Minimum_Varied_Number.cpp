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

        int sum = 0;

        int count =9;

        vector<int> v;

        for(int i=0 ; i<= n ; i++)
        {
            sum += count;
            v.push_back(count);
            count--; 

            if(sum > n)
            {
                sum -= count + 1;

                sum = n - sum ;
              //  cout<<sum<<endl;
                v.pop_back();
                v.push_back(sum);

                break;
            }
        }

        int vsum = 0;

        vector<int> sneha;

        for(int i=0; i<v.size() ; i++)
        {
            vsum += v[i];
    
            sneha.push_back(v[i]);
            if(vsum == n)
            {
                break;
            }
        }

        sort(sneha.begin() , sneha.end());

        for(int i= 0 ; i<sneha.size() ; i++)
        {
            cout<<sneha[i];
        }cout<<endl;
        
    }
}