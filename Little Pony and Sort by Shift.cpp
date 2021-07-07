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
    int n, s, v(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            s = i,
            v++;
    if (a[n - 1] > a[0])
        s = n - 1,
        v++;
    if (v == 0)
        cout << 0 << endl;
    else if (v > 1)
        cout << -1 << endl;
    else cout << n - 1 - s << endl;
    return 0;
}
