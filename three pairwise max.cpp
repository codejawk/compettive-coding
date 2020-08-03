#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define ll long long
int maximum(int x, int y, int z) {
	int max = x; /* assume x is the largest */

	if (y > max) { /* if y is larger than max, assign y to max */
		max = y;
	} /* end if */

	if (z > max) { /* if z is larger than max, assign z to max */
		max = z;
	} /* end if */

	return max; /* max is the largest value */
}
int main(){
    fastio;


    int t;cin>>t;
    while(t--){
         int x,y,z;
         cin>>x>>y>>z;

         if(x==y&&y==z){
            cout<<"YES"<<endl<<x<<' '<<y<<' '<<z<<endl;
         }
         else if(x!=y && y!=z && x!=z){
            cout<<"NO"<<endl;
         }
         else if(x>y && y==z ||y>x && x==z ||z>x && x==y){
            cout<<"NO"<<endl;
         }else {
            cout<<"YES"<<endl;
            int p;
            int k=maximum(x,y,z);
            if(k==x){
                p=min(y,z);
            }else if(k==y){
            p=min(z,x);
            }else{
                p=min(x,y);
            }

            cout<<k<<' '<<p<<' '<<1<<endl;

            }


    }





return 0;

}


