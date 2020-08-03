#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define vi vector<int>
#define nl endl
int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){

    priority_queue <int> pq;
    pq.push(10);
    int n,k;cin>>n>>k;
    vector<int> a;
    fo(i,n){cin>>a[i];
        if(a[i]%3!=0){
            pq.push(a[i]);
        }
    }

    }



return 0;

}



!=
