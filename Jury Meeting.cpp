#include<bits/stdc++.h>
using namespace std;

#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define AP(i,s,e) for(ll i=s;i<e;i++)
#define rf(i,s,e) for(ll i=s-1;i>=e;i--)
#define fill(a,x) memset(a,x,sizeof(a));
#define inarr(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define outarr(a,n) for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
#define pb push_back
#define setp(x) fixed << setprecision(x)
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define maxa(a,n) *max_element(a,a+n)
#define mina(a,n) *min_element(a,a+n)

typedef long long int ll;
typedef long double lld;
typedef pair<long long,long long> pll;
typedef vector<long long> vll;
typedef vector<pair<long long,long long> > vpll;
typedef long double ld;

const ll N = 200005;
const ll MOD = 998244353;

int priyamrendra[N];

ll power_mod(ll are, ll bre){
	ll crr = 1;
	while(bre){
		if(bre&1){
			crr *= are;
			crr %= MOD;
		}
		bre >>= 1;
		are *= are;
		are %= MOD;
	}
	return crr;
}

int main(){
	FAST1;
	FAST2;
	int test_case;
	cin>>test_case;
	while(test_case--){
		ll number;
		cin>>number;
		ll mx=0,smx = 0;
		ll count = 0;
		for(int i=1;i<=number;i++){
			cin>>priyamrendra[i];
			if(priyamrendra[i] > mx){
				smx = mx;
				count = 1;
                mx = priyamrendra[i];
			}else{
				if(priyamrendra[i] > smx){
					smx = priyamrendra[i];
					count = 1;
				}else{
					if(priyamrendra[i] == smx){
						count++;
					}
				}
			}
		}
		if(mx-smx > 1){
			cout<<0<<endl;
		}
		else{
			if(mx == smx){
				ll ans = 1;
				for(int i=1;i<=number;i++){
					ans*=i;ans%=MOD;
				}
				cout<<ans<<endl;
			}else{
				ll ans = 1;
				for(int i=1;i<=number;i++){
					ans*=i;
					ans%=MOD;
				}
				ll sol = 1;
				ll los = 1;
				for(int i=1;i<=count+1;i++){
					sol *= i;
					sol %= MOD;
					if(i != count+1){
						los *= i;
						los %= MOD;
					}
				}
				ans *= power_mod(sol,MOD-2);
				ans %= MOD;

				ans *= ((sol - los)+MOD)%MOD;
				ans %= MOD;
				cout<<ans<<endl;
			}
		}
	}

	return 0;
}
