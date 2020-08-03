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
         int n;cin>>n;
         ll res=0;
         int a[n];
         fo(i,n){
         cin>>a[i];
         }
         int l_e=0,r_e=0;
         int l=0,r=n-1;
         stack<int> s;
         s.push(0);
         while(l<=r){
               // cout<<"khan";
            if(a[l]<=a[r]&&s.top()<=a[l]){
                s.push(a[l]);
                l++;l_e++;
            }else if(a[l]>=a[r] && s.top()<=a[r]){
                s.push(a[r]);r--;r_e++;
            }else{int cnt=0;
                while (s.top()!=0)
                    {cnt++;
                        s.pop();
                        }

            //s.push(0);
            res+=cnt-l_e+l-1;//l_e+r_e-l;
                l++;
                //res+=l-il;
                //r_e=0;
                r=n-1;
            }

         }
         if(res==0)cout<<0<<endl;
         else{
         cout<<res<<endl;
         }

    }





return 0;

}

