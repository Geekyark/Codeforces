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
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int num;
        cin>>num;
        int priyamrendra[num];
        double ans=0.0;
        for(int i=0;i<num;++i){
            cin>>priyamrendra[i];
        }
        sort(priyamrendra,priyamrendra+num,greater<int>());
        int sum=0;
        for(int i=1;i<num;++i){
            sum+=priyamrendra[i];
        }
        ans+=(double)sum/(num-1);
        ans+=(double)priyamrendra[0];
        cout<<fixed<<setprecision(9)<<ans<<endl;
    }

    return 0;
}
