#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define vi vector<int>
//int res;
int solve(int n, int z){
    int res=0;
    //if(z==0)return 1;
    if(n==1&&z>=0)return 1;

    /*
    x1+x2+x3=5;;;;(3,5)
    => 0+x1+x2=5;;;(2,5)
   + =>1+x1+x2=5;;;(2,4)
   + =>2+x1+x2=5    (2,3)
    +=>3+x1+x2=5
   + =>4+x1+x2=5
   + =>5+x1+x2=5
    =>6+x1+x2=5(impossible)

    so*/

    int i=0;
    while(i<=z){
        res+=solve(n-1,z-i);
        i++;
    }
return res;
}

int main(){
    fastio;


    int t;cin>>t;
    while(t--){
        int n,z;cin>>n>>z;

        cout<<solve(n,z)<<endl;

    }



return 0;

}



