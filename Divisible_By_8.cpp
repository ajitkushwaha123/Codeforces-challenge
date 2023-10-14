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

        string s;
        cin>>s;

        vector<int> v;
        
        if(s.length() == 1)
        {
            s = "00" + s;
        }

        if(s.length() == 2)
        {
            s = "0" + s;
        }

        reverse(s.begin() , s.end());

        int x = (int(s[0]) - 48)+ 10*(int(s[1]) - 48) + 100*(int(s[2]) - 48);

    //    cout<<x<<endl;

    int index = 0;

        if(x% 8 ==0 )
        {
            reverse(s.begin() , s.end());

            for(int i =0; i<s.length() - 1 ; i++)
            {
                if(s[i] != '0')
                {
                    index = i;
                    break;
                }
            }

         //   cout<<index<<endl;
            for(int i=index ; i<s.length() ; i++)
            {
                cout<<s[i];
            }cout<<endl;
    
        }

        else
        {
            x = 10*(int(s[1]) - 48) + 1*(int(s[0]) - 48);
            

         //   cout<<s<<endl;
            reverse(s.begin() ,s.end());

            x += 1;
          ///  cout<<x<<endl;

          for(int j=0; j<s.length()- 1 ; j++)
                  {
                    if(s[j] == '0')
                    {
                        index = j;
                    }
                    else{
                        break;
                    }
                  }

        
            for(int i=2; i<=9 ; i++)
            {
                
            //   cout<<x<<endl;  
                

                if(x % 8 ==0 )
                {
                  //  cout<<x<<" ";

             //     cout<<s<<endl;
                  

              //    cout<<index<<" ";


                    for(int i= index; i<s.length() -2; i++)
                    {
                        cout<<s[i];
                    }

                    cout<<x<<endl;
                    break;
                }

            

                x += 1;
                // if(x%8 == 0)
                // {
                //     reverse(s.begin() , s.end());
                //     cout<<x<<endl;

                //     for(int i =0; i<s.length() ; i++)
                //     {
                //        if(s[i] != '0')
                //        {
                //           index = i;
                //           break;
                //        }
                //      }

                //      for(int i = index ; i<s.length() - 2 ; i++)

                //      {
                // //        cout<<s[i];
                //      }

                // //     cout<<x<<endl;
                //     break;
                // }
            }
       
        }
    }
}