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
#define MOD 1000000007
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
int main()
{
    ll test_case;
    cin>>test_case;

    while(test_case--){
        ll number;
        cin>>number;

        string str;
        cin>>str;
        AP(i,0,number){
            if(str[i] == 'U')
                str[i] = 'D';
            else if (str[i] == 'D')
                str[i] = 'U';
        }

        cout<<str<<"\n";
    }

    return 0;
}
