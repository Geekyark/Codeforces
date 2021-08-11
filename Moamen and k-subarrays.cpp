#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define pb push_back
#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
typedef long long ll;
typedef pair<int, int> pii;

ll ap[1000005], d[1000005], test_case, num,o,priyamrendra ;
int main() {
     cin >> test_case ;
     while(test_case--) {
      cin >> num>>o;
      priyamrendra= num ;
      for(ll i = 1; i <= num; i ++)
        cin >>ap[i], d[ap[i]] = i ;
      sort(ap + 1, ap + 1 + num) ;
      for(ll i = 2; i <= num; i ++) {
       if(d[ap[i - 1]] + 1 == d[ap[i]])
           priyamrendra-- ;
      }
      if(priyamrendra<=o)
        cout << "Yes\n" ;
      else
        cout << "No\n" ;
     }

}
