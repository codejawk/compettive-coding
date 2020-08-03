#include<bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define vi vector<int>
#define nl endl

int main(){
   // fastio;
//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
//cout<<t;
    while(t--){

 int n,k;
 cin>>n>>k;

    priority_queue <int> pq;

    vector<int> a;

fo(i,n){
    int o;cin>>o;a.push_back(o);

        if(o%3!=0){
            pq.push(o);
        }
    }
//fo(i,n)cout<<a[i];

    cout<<pq[0];

    int x=0;
   /* while(1){
        fo(i,pq.size()){
        //    if(x+pq[0])
        }
    }*/

    }



return 0;

}





