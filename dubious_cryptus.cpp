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
        ll l,m,r,a,b,c;
        cin>>l>>r>>m;
        a=l;
        ll n=m/l;
        ll diff=m-(l*n);

        if(n==0){
            diff=m-l;
            c=r;
            b=c+diff;
        }
        else{
            b=r;
            c=b-diff;
        }

        cout<<a<<" "<<b<<" "<<c<<endl;
    }




return 0;

}

