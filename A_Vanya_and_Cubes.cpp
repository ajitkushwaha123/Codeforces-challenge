#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum = 0;

    int count = 1;

    int sneha = 0;

    for(int i = 1 ; i <= n; i++)
    {
        

        sneha = (i*(i+1)*(i+2))/6;

        if(sneha > n)
        {
            cout<<count - 1<<endl;
            break;
        }
        else if(sneha == n)
        {
            cout<<count<<endl;
            break;
        }

     //   cout<<sneha<<" ";

     //   cout<<sum<<endl;

        count++;
    }
}