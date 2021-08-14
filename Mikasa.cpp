#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define pb push_back
#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 int t;
 cin >> t;
 while(t--){
  ll n, m;
  cin >> n >> m;
  if (m<n){
   cout << 0 << "\n";
  }
  else{
   if(((m+1)>>__builtin_ctz(m+1))==1){
    cout << m+1 << "\n";
   }
   else{
    ll comp = (1<<((int)log2(n)+1));
    if (m%comp<=(n+1)){
     cout << comp*(m/comp) << "\n";
    }
    else{
     ll temp = comp*(m/comp);
     map<ll, int> chk;
     for(ll i = temp; i<=m; i++){
      chk[(n^i)]++;
     }
     for(ll i = temp; i<=m; i++){
      if(!chk[i]){
       cout << i << "\n";
       break;
      }
     }
    }
   }
  }
 }
    return 0;
}
