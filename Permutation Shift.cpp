#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
using namespace std;
const ll  N = 1e5+10, mod = 1e9+7, inf = 2e18 , length = 25;
int t ;
int  main() {
    FAST1;
    FAST2;
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int n , m ;
        cin >> n >> m ;
        map < int , int > mp ;
        for ( int i = 1 ; i <= n ; i++)
        {
            int ap ;
            cin >> ap;
            mp[((i-ap)+n)%n]++;
        }
        vector < int > ans ;
        for ( auto i : mp)
        {
            int remaning = n - i.second ;
            if (m * 2 >= remaning)
                ans.push_back(i.first);
        }
        cout <<ans.size()<< ' ';
        for ( auto i : ans)
                cout << i << ' ';
        cout <<endl;
    }
}
