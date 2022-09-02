#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>&ans)
{
    int start = 0;
    int end = ans.size()-1;
    while(start<=end)
    {
        if(ans[start]!=ans[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
    
}


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>ans;
       for(int i=0;i<n;i++)
       {
        int t;
        cin>>t;
        ans.push_back(t);
       }
       unordered_map<int, int>mp;

       for(int i=0;i<ans.size();i++)
       {
        mp[ans[i]]++;
       }
       int m = -9;
       for(int i=1;i<=7;i++)
       {
        if(mp.find(i)==mp.end())
        {
            cout<<"no"<<endl;
            m=5;
            break;
        }
       }
       if(m==5)continue;

       if(solve(ans)){
        cout<<"yes"<<endl;
       }
       else{
        cout<<"no"<<endl;
       }
    }
    return 0;
}
