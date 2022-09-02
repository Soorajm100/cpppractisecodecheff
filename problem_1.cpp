#include <bits/stdc++.h>
using namespace std;

//as 1 is the losing state it infers that all the numbers are odd are losing state.
// even is winning state;

int main() {
	// your code goes here
    int test;
    cin>>test;

    while(test--)
    {
         int n;
         cin>>n;

      //   vector<int>ans;
     if(n%2==1)
     {
         cout<<"BOB"<<endl;
     }
     else{
         cout<<"ALICE"<<endl;
     }


    }


	return 0;
}
