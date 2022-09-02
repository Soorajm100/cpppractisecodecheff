#include <bits/stdc++.h>
using namespace std;

//follows greedy algorithm very helpful sorting application

int main() {
	// your code goes here
    int test;
    cin>>test;

    while(test--)
    {
         int n , v1 , v2;
         cin>>n>>v1>>v2;

         double timefloor , timeelv;

         timefloor = pow(2,0.5)*n/v1;
         timeelv = 2.0*n/v2;
          cout<<timefloor<<" "<<timeelv<<endl;
         if(timefloor>timeelv)
         {
            cout<<"Elevator"<<endl;
         }
         else{
            cout<<"Stairs"<<endl;
         }
    }


	return 0;
}
