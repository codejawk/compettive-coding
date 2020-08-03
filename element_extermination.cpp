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
        int n;
        cin>>n;
        vector <int> p;
      //  cout<<"hello";
        stack <int> s;
//cout<<"hello";
        fo(i,n){
            int o;cin>>o;
            p.push_back(o);

    }
        fo(i,n)cout<<p[i];
        cout<<p[0];
        s.push(p[0]);
        //int i=1;
       Fo(i,1,n){
            int top;
            if(p[i]<s.top()){
                s.push(p[i]);


            }else{
                while(p[i]>s.top() && !s.empty() ){
                  top=  s.top();s.pop();

                }
                if(s.empty()){
                    s.push(top);
                }
                else{
                    s.push(p[i]);
                }

            }

        }

        s.pop();
        if(s.empty())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }


return 0;

}

