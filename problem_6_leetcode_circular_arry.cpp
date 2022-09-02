#include<bits/stdc++.h>
using namespace std;

int solve(int arr[] , int n )
{
   
   int max_staright  =INT_MIN;
   int min_staright=  INT_MAX;
   int temp_min_staright= 0;
   int temp_max_staright = 0;
   int arrsum = 0;
   for(int i=0;i<n;i++){
     
     temp_max_staright+=arr[i];
     max_staright = max(max_staright , temp_max_staright);
     if(temp_max_staright<0)temp_max_staright = 0;

     temp_min_staright+=arr[i];
     min_staright=min(min_staright , temp_min_staright);
     if(temp_min_staright>0)temp_min_staright=0;

     arrsum+=arr[i];
   }
     
     if(arrsum==min_staright)
     {
        return max_staright;
     }

     return max(max_staright , arrsum-min_staright);


}

int main()
{
    
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  

  int ans = solve(arr, n);

  cout<<ans<<endl;
 
  return 0;
}