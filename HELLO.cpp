#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;

while(t--){
    int a,b;
    cin>>a>>b;
    int res;
    if(2*a<b){
        cout<<a<<endl;
    }else if(2*b<a){
        cout<<b<<endl;
        }else{
            res=(a+b)/3;
            cout<<res<<endl;
        }

}


return 0;

}
