#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    ll test_case=1;
    cin>>test_case;
    while(test_case--){
        ll n,ans=0;
        cin>>n;
        ll priyamrendra[n+1];
        for(int i=1;i<=n;i++){
            cin>>priyamrendra[i];
            if(i>=2)ans=max(ans,(ll)(priyamrendra[i]*priyamrendra[i-1]));
        }
        cout<<ans<<endl;
    }
}
