#include <bits/stdc++.h>
using namespace std;
void solve(unordered_map<int,int>mp ,int n)
{
       int count2= 0;
    

           if(n%2==1)
           {
            cout<<"NO"<<endl;
            return ;
           }
        
           int count= 0;
           if(mp.size()%2==0)
           {
            for(auto x : mp)
            {
                if(x.second>1 and x.second%2==1)
                {
                    count++;
                }
            }
             if(count)
             {
                cout<<"NO"<<endl;
                return ;
             }
           }
            int fine=0;
           if(mp.size()%2==1)
           {
                 for(auto x : mp)
                 {
                    if(x.second==1)fine++;
                 }

                 if(fine%2!=0)
                 {
                    cout<<"NO"<<endl;
                    return ;
                 }
           }

           cout<<"YES"<<endl;
           return ;
}




int main() {
	
    int test;
    cin>>test;

    while(test--)
    {
        int n ;
        cin>>n;
        unordered_map<int,int>mp;
        set<int>s;
        bool hold= false;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            if(!hold and s.count(t))
            {
                hold = !hold;
            }
            s.insert(t);
        }
       //solve(mp , n);
        
        if(s.size()%2==1)
        {
            if(hold==true)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }

	return 0;
}
