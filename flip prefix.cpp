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
            int n;cin>>n;

        string s,t;
        cin>>s>>t;
vector<int> ops;
        fo(i,n){
            if(s[i]!=t[i]){
                 // 3 operations , flip for length i,
                 //flip for lenth 1,
                 //flip for length i;
                 // only ith bit gets modified

                ops.push_back(i+1);ops.push_back(1);
                ops.push_back(i+1);
            }

        }
        cout<<ops.size()<<" ";
        for(int i:ops){
            cout<<i<<" ";
        }

        cout<<endl;
    }




return 0;

}

