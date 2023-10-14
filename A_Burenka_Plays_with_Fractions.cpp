#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;

        double s = a/b;
        double q = c/d;

        int w = a,x = b,y = c ,z = d;

       // cout<<s<<" "<<q<<endl;

        if(q == s)
        {
            cout<<"0"<<endl;
        }

       // cout<<max(w,x) <<" "<<min(w,x)<<endl;

        if(b == d && max(w,y)%min(w , y) == 0)
        {
            cout<<"1"<<endl;
        }
        else if(b == d && max(w,y)%min(w , y) != 0)
        {
            cout<<"2"<<endl;
        }

        if(a == c && max(x,z)%min(x , z) == 0)
        {
            cout<<"1"<<endl;
        }
        else if(a == c && max(x,z)%min(x , z) != 0)
        {
            cout<<"2"<<endl;
        }

        else
        {
            float t = max(w,y)/min(w,y);
            float k = max(x,z)/min(x,z);

            float o = t*k;

            if(o == int(o))
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }
        else
        {
            cout<<"2"<<endl;
        }
    
        
      
    }
}