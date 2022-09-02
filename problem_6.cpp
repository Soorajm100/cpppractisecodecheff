#include<bits/stdc++.h>
using namespace std;

 void solve(int a[],string output, int index, vector<string>& ans, map<int, string>&mp,int N) {
       // base case
       if(index >= N) {
           ans.push_back(output);
           return;
       }
       int number = a[index];
       string value = mp[number];
       
       for(int i = 0; i < value.size(); i++) {
           output.push_back(value[i]);
           solve(a, output, index+1, ans, mp,N);
           output.pop_back();
       }
   }

   //Function to find list of all words possible by pressing given numbers.
   vector<string> possibleWords(int a[], int N)
   {
       //Your code here
       vector<string> ans;
       if(N == 0) {
           return ans;
       }
       string output = "";
       int index = 0;
       map<int , string> mp;
       
        mp.insert({2 , "abc"});
        mp.insert({3 , "def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({6,"mno"});
        mp.insert({7,"pqrs"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});
       
       solve(a,output,index,ans,mp,N);
       return ans;
   }
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<string>fuel = possibleWords(a ,n);
    for(auto x : fuel)
    {
    cout<<x<<" ";
    }

    return 0;
}
