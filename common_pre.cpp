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
         int n;char last='a';
         cin>>n;
         int a[n];int maxim=0;int pos=0;
         fo(i,n){
                cin>>a[i];
                if(a[i]>=maxim)
                {

                   maxim=a[i];
                pos=i;
                }
         }

         for(int i=0;i<=pos;i++){

            for(int j=0;j<a[i];j++){
                cout<<"a";
                last='a';
            }

            if(a[i]==0){
                int i=last+1;
                cout<<(char)i;
                last=(char)i;
            }
cout<<endl;

         }
         for(int j=0;j<maxim;j++){
                cout<<"a";
                last='a';
            }
        cout<<endl;
            for(int i=pos+1;i<n;i++){
                for(int j=0;j<a[i];j++){
                cout<<"a";
                last='a';
            }

            if(a[i]==0){
                    int i=last+1;
                cout<<(char)i;
                last=(char)i;
            }
cout<<endl;
            }






}
return 0;

}

