#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define vi vector<int>

int main(){
    fastio;

    int t;
    cin>>t;
    while(t--){

        string s;cin>>s;

        int n=s.size();
        map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }

        int mx=0;
        for(auto i: mp){
            mx=max(mx,i.second);
        }
        int mn=n-mx;
        fo(c,10){
        fo(cc,10){

            int cnt=0;
            vector<int> cmp={char(c+'0'),char(cc+'0')};
            int tog=0;

            fo(i,n){
                if(cmp[tog]==s[i])tog=tog^1;
                else cnt++;
            }

            if((n-cnt)%2==1)cnt++;
            mn=min(mn,cnt);


        }
        }

        cout<<mn<<endl;


    }


return 0;

}

