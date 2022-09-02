#include <bits/stdc++.h>
using namespace std;

long long int mod =pow(10,9)+7;


int fact(int n)
{
    long long int prod = 1;
    for(int i=1;i<=n;i++)
    {
        prod*=i;
    }
    return prod%mod;
}
 long long int nck(int n , int k)
{
    return (fact(n)/(fact(n-k)*fact(k)))%mod;
    

}
void solve(string ans, int n , int k)
{
    if(k==1)
    {
        cout<<pow(2,n);
        cout<<endl;
        return ;
    } 

    long long int tri =(long long ) nck(n , k)%mod;

    cout<<tri+1<<endl;
    return ;

}

int main() {
	// your code goes here

   int test;
   cin>>test;
   while(test--)
   {
      int n ;
      int k;
      cin>>n>>k;
       string ans;
       cin>>ans;
       //solve(ans,  n, k);
     
     int a = pow(2 , (n+1-k)) +1 ;
     int b = pow(2,(n+1-k));

     if(n%2==1)
     {
        cout<<a<<endl;
     }
     else if(n==k)
     {
        cout<<n<<endl;
     }
     else{
        cout<<b<<endl;
     }
   }


	return 0;
}
