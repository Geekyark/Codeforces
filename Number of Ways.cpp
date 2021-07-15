#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    ll n,i;
    while(cin>>n){
        ll a[n+2],sum[n+2];
        sum[0]=0;
        for(i=1;i<=n;i++){
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
        }
        if(sum[n]%3!=0){
            cout<<"0\n";
            return 0;
        }
        ll s=sum[n]/3;
        ll ss=s+s;
        ll cnt=0,ans=0;
        for(i=1;i<n;i++){
            if(sum[i]==ss)
                ans+=cnt;
            if(sum[i]==s)
                cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
