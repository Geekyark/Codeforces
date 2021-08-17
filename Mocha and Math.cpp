#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define pb push_back
#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    FAST1;
    FAST2;
    ll test_case;
    cin>>test_case;
    while(test_case--){
        ll num;
        cin>>num;
        ll a,p;
        cin>>a;
        ll ans;
        num--;
        while(num--){
            cin>>p;
            a=a&p;
        }
        cout<<a<<endl;
    }
    return 0;
}
