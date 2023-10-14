#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i= 1 ; i<=t ; i++)
    {
        double n;
        cin>>n;


        vector<double> v;

        for(double i = 0; i<n ; i++)
        {
            double a;
            cin>>a;

            v.push_back(a);
        }

        sort(v.begin() , v.end());

        if(int(n)%2 == 0)
        {
            double  left = (v[0] + v[1])/2.0;
            double right = (v[n-1] + v[n-2])/2.0;

            cout<<"Case #"<<i<<": "<<right - left<<endl;
        }
        else
        {
            if(v[n-3] - v[n-4] < v[n-2] - v[n-3])
            {

                double  left = (v[0] + v[1])/2.0;
                double right = (v[n-1] + v[n-2])/2.0;

                cout<<"Case #"<<i<<": "<<right - left<<endl;
            }
            else
            {
                double  left = (v[0] + v[1])/2.0;
                double right = (v[n-1] + v[n-2] + v[n-3])/3.0;

                 cout<<"Case #"<<i<<": "<<right - left<<endl;
            }
        }
    }
}