#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define vi vector<int>

int main(){
    fastio;

        int t;cin>>t;
        while(t--){
            int n;cin>>n;
            int a[n];
            int first=-1;
            fo(i,n){
            cin>>a[i];
        }
        int i=0;

        while(a[i]==1 && i<n){
            i++;
        }

        if(i%2==0 && i<n)cout<<"First"<<endl;
        else if(i%2!=0 && i<n)cout<<"Second"<<endl;

        if(i==n && i%2==1)cout<<"First"<<endl;
        if(i==n && i%2==0)cout<<"Second"<<endl;




        }





return 0;

}

