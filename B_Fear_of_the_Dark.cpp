#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;

        double d1 , d2 , d3 , d4 , d5, d6;

        d1 = sqrt((a-c)*(a-c) + (b-d)*(b-d));
        d2 = sqrt(c*c + d*d);

        d3 = sqrt(e*e + f*f);
        d4 = sqrt((e-a)*(e-a) + (f-b)*(f-b));

        double ans1 = max(d1,d2);
        double ans2 = max(d3 , d4);

        double ans = min(ans1 , ans2);

        double x;
        double y;

        if(f > d)
        {
            x = (f-d)/2;
            y = (e-c)/2;
        }
        else{
            x = ((c-e))/2;
            y = ((d-f))/2;
        }

    //    cout<<x<<" "<<y<<endl;

        d5 = sqrt((x-a)*(x-a) + (y-b)*(y-b));

            d6 = sqrt(x*x + y*y);
        
        double sneha = max(d5,d6);

     // cout<<sneha<<endl;
        double ajit = min(sneha , ans);

      //  cout<<ajit<<endl;
       cout<<fixed<<setprecision(10)<<ajit<<endl;

    }
}