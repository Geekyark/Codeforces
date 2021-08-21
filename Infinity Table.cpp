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
        ll number;
		cin >> number;
		ll priyamrendra= ceil(sqrt(number));
		ll val = 2*(priyamrendra-1)+1;
		ll lower = number-(priyamrendra-1)*(priyamrendra-1);
		ll red, cut;
		if(lower>=priyamrendra){
			red = priyamrendra;
			cut = priyamrendra-(lower-priyamrendra);
		}
		else{
			red = lower;
			cut = priyamrendra;
		}

		cout<<red<<" "<<cut<<endl;

    }
}
