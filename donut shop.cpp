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

    long long a,b,c;
    cin>>a>>b>>c;
    long long M,N;
    if(a<=(c/b)){
        M=(b/2);
        N=-1;
    }
    else if(a>=c){
        M=-1;
        N=(b);
    }else{
        int mid;
          //  long long i=1;
        int s=1,e=b;
         while(s<e){
                mid=(s+e)/2;
            if(a*mid<=c){
                s=mid+1;
            }
         else{
            e=mid-1;
         }
         }
         int min=-5;
         if(a*s<=c){
            M=s;
            N=M+1;
         }else{
         M=(mid);
         N=M+1;}
        }
        if(M<1000000000 && N<1000000000)
            cout<<M<<" "<<N<<endl;
        else
        {
            if(M==-1)cout<<M<<" ";
            else cout<<10000000<<" ";

            if(N==-1) cout<<N<<" "<<endl;
            else cout<<10000000<<" "<<endl;
        }
    }








return 0;
}
