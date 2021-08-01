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
    cin >>test_case;
    while(test_case--){
    ll num;
    cin >> num;
    if(num<7){
        cout << 15 << endl;
        continue;
    }
    ll ap = num/6;
    ll bk = num%6;

    if(bk==1 || bk==2)
        cout << (ap-1)*15 + 20;
    else if(bk==3 || bk==4)
        cout << (ap-1)*15 + 25;
    else if(bk==0)
        cout << (ap)*15;
    else if(bk==5)
        cout << (ap+1)*15;
    cout<<endl;
  }
 return 0;
}
