#include <bits/stdc++.h>
using namespace std;
 vector<long long int>ans;
 
      set<long long int>s;

void prep()
{
      for(int i=0;i<=30;i++)
     {
        for(int j=0;j<=30 ;j++)
        {
            if(i==j)continue;
            int t;
            if(i!=j) t = pow(2,i) + pow(2,j); 
            if(i!=j)s.insert(t);
        }
     }
     for(auto x : s)
     {
         ans.push_back(x);
     }
     
}

void solve(int n)
{
   
   int ind = lower_bound(ans.begin() , ans.end() , n)-ans.begin();
   int ind2 = upper_bound(ans.begin() , ans.end() , n) - ans.begin();
   ind2--;
   cout<<min(abs(ans[ind]-n) , abs(ans[ind2]-n) )<<endl;
    

}

int main() {
	
    int test;
    cin>>test;
    prep();
    while(test--)
    {
        long long int n;
        cin>>n;

        solve(n);        

    }
	
	
	return 0;
}
