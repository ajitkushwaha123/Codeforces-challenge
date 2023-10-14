#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    vector<int> v;
    for(int i= 0; i<t; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int target = 5;


    
    vector<int>::iterator lower, upper;
        lower = lower_bound(v.begin() , v.end()  , target);


  cout<<lower-v.begin();
}