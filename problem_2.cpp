#include <bits/stdc++.h>
using namespace std;

//follows greedy algorithm very helpful sorting application

int main() {
	// your code goes here
    int test;
    cin>>test;

    while(test--)
    {
         int n , x;
         cin>>n>>x;

         vector<int>ans;
         for(int i=0;i<n;i++)
         {
            int t;
            cin>>t;
            ans.push_back(t);
         }
           
        sort(ans.begin() , ans.end());
        int count=  0;
         for(int i=0;i<n;i++)
         {
            if(x>=ans[i])
            { 
                count++;
                x = max(x , 2*ans[i]);
                
            }
            else{
                while(ans[i]>x)
                {
                    x*=2;
                    count++;
                }
                count++;
                x = max( x , 2*ans[i]);
            }

         }
          
          cout<<count<<endl;


    }


	return 0;
}
