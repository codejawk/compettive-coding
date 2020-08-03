#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define mod 1000000009

int main(){
    fastio;


  string s;
  cin>>s;

    int n=s.size();
    //int dp[n+1];
    if(n==0)cout<<"bye";
    else{
    //dp[0]=s[0];
    //dp[1]=s[0];
    queue<int> q;
    q.push(s[0]-'0');
int  sum=s[0]-'0';
    for(int i=1;i<n;i++){
            sum+=s[i]-'0';
            q.push(s[i]-'0');
            int j=i;
        while(j--){
          int top=q.front()%mod;
            q.pop();
          //cout<<top<<endl;
          //int mm=moduloMultiplication(a,10);
            sum+=((ll)(top*10)%mod+(s[i]-'0'))%mod;
            q.push((ll)(top*10)%mod+(s[i]-'0')%mod);
        }
    }
cout<<sum%mod<<endl;



    }

return 0;

}

