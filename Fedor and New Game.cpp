#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main(){
    ll n,m,k;
    cin>>n>>m>>k;
    bitset<32> ar[m+10];
    for(ll i=0;i<m+1;i++){
        ll x;
        cin>>x;
        ar[i]=x;
    }
    ll ans=0;
    for(ll i=0;i<m;i++){
        ll k_diff=0;
        for(ll j=0;j<32;j++){
            if(ar[m][j]!=ar[i][j]){
                k_diff++;
            }
        }
        if(k_diff<=k){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

