#include<bits/stdc++.h>
using namespace std;

int bacteria(int t)
{
    
}

int main()
{
    int t;
    cin>>t;

    int count = 1;
    int flag = 0;

    while(count < t)
    {
        count *= 2;
        flag++;
    }

    if(count == t)
    {
        cout<<"1"<<endl;
    }
    else
    {
        t = count - t;
        cout<<t<<endl;
    }

 
}