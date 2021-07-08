#include<bits/stdc++.h>
#include<vector>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    ll x,y,n;
    ll ans=0;
    cin>>x>>y>>n;
    if(n==1){
        ans=x-y;
    }
    else if(n==2){
        ans=x+y;
    }
    else{
        ans=y-x;
    }
    cout<<(ans)%1000000007;
}
