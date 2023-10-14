#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;

   int countL= 0;
   int countR = 0;

   for(int i= 0; i<s.length() ; i++)
   {
    if(s[i] == 'L')
    {
        countL++;
    }
    else if(s[i] == 'R')
    {
        countR++;
    }
   }

//    cout<<countL<<" "<<countR<<endl;

   vector<char> v;

   if(countL <= countR)
   {
      for(int i = 0 ; i<s.length() ; i++)
      {
         if(s[i] == '_')
         {
            v.push_back('R');
         }
         else
         {
            v.push_back(s[i]);
         }
      }
   }
   else
   {
     for(int i = 0 ; i<s.length() ; i++)
      {
         if(s[i] == '_')
         {
            v.push_back('L');
         }
         else
         {
            v.push_back(s[i]);
         }
      }
   }

   int ans = 0;

   for(int i= 0; i<s.length() ; i++)
   {
      if(v[i] == 'L')
      {
         ans -= 1;
      }

      else
      {
        ans += 1;
      }
   }

   cout<<abs(ans)<<endl;
}