#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
int main(){
    fastio;


    int t;cin>>t;
    while(t--){
         int n;
         cin>>n;int a[n];
         fo(i,n)cin>>a[i];
         int chance=0;
         int rem=n;
        // cout<<chance<<" ";
         for(int i=0;i<n-1;i++){

               if(a[i]==1){
                    if(chance==0) {chance=1;}
                    else chance=0; rem--; //dusra
                }
                else{

                        if(a[i+1]>1 && i!=n-1){
                        chance=chance;
                        } else{
                        if(chance==0) {chance=1;}
                    else chance=0;
                        }
                            //pahla
                }
                //cout<<chance<<" ";
         }

         if(chance==0)cout<<"FIRST"<<endl;
         else cout<<"SECOND"<<endl;




    }





return 0;

}

