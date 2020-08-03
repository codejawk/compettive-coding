#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long


int main(){
	fastio;

	//int t; cin >> t;
	string s;
	cin>>s;

	int cnt=0,j;
    cout<<"khan"<<endl;

	for(int i=0;i<s.size()-1;i++)
    {
        //cout<<"khan"<<endl;
        if(s[i]=='1'){

            cnt++;j=i+1;
            cout<<"khan"<<endl;
            cout<<cnt<<endl;
            while(s[j]==1 && j<s.size()){
                cnt++;j++;
                cout<<cnt<<endl;
            }
        }

    }

    cout<<cnt;

	return 0;
}



