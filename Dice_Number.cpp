#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;

        vector<int> s;
        vector<int> aj;

        s.push_back(a);
        s.push_back(b);
        s.push_back(c);

        aj.push_back(d);
        aj.push_back(e);
        aj.push_back(f);

        sort(s.begin() , s.end());

        sort(aj.begin() , aj.end());

        // reverse(s.begin() , s.end());

        // reverse(aj.begin() , aj.end());

        int num1 = 0;

        int count = 1;

        int num2 = 0;
        int count2 = 1;

        for(int i=0; i<s.size() ; i++)
        {
            num1 += s[i]*count;
            count*=10;
        }

        for(int i=0; i<aj.size() ; i++)
        {
            num2 += aj[i]*count2;
            count2*=10;
        }

        if(num1 > num2)
        {
            cout<<"Alice"<<endl;
        }
        else if(num1 == num2)
        {
            cout<<"Tie"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
     //   cout<<num1<<" "<<num2<<endl;
    }
}