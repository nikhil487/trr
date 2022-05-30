#include<iostream>
#include<vector>

using namespace std;
#define ll long long 

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k;
        cin>>k;

        vector<char>s(k+1);
        for(int i = 1;i<=k;i++)
        {
            cin>>s[i];
        }
        bool flag  = true;
        int p = 0;
        while(flag)
        { 
        int y = 0;
        for(int i = 1;i<k;i++)
        {
            if(s[i] == 'A' && s[i+1] == 'P')
            {
                    s[i+1] = 'A';
                    y = 1; 
                    i++;        
            }
        }

          if(y == 1) p++;
          else break;

        }
        

        cout<<p<<endl;


    }
}