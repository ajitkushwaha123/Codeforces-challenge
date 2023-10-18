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

        vector<int> v;

        vector<int> sneha;

        for(int i=0 ; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
            sneha.push_back(ele);
        }

        sort(sneha.begin() , sneha.end());
        reverse(sneha.begin() , sneha.end());

        int max = sneha[0];
        int secondMax =sneha[1];

        int index = -1;

        for(int i=0; i<v.size() ; i++)
        {
            if(v[i] == max)
            {
                index = i;
            }
        }

        for(int i=0; i<v.size() ; i++)
        {
            if(i == index)
            {
                cout<<max-secondMax<<" ";
            }
            else
            {
                cout<<v[i]-max<<" ";
            }
        }

        cout<<endl;
    }
}