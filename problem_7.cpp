#include<bits/stdc++.h>
using namespace std;


void solve()
{
  long long int n , k , ans = 0 , tmp; 
  cin>>n;
  vector<long long >walls(n);
  set<long long >s;
  for(int i=0;i<n;i++)
  {
      cin>>walls[i];
      s.insert(walls[i]);
  }
  
  long long q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
      long long x,y;
      cin>>x>>y;
      
      long long a = x+y;
      
      
      if(s.count(a))
      {
          cout<<-1<<endl;
      }
      else{
          auto it = upper_bound(walls.begin() , walls.end() , a)-walls.begin();
          cout<<it<<endl;
          
      }
  }
  


}
int main()
{ 
   
   int test;
   cin>>test;
   while(test--)
   {

       solve();
   }

    return 0;
}