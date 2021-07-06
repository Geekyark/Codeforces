#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    int r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double d = sqrt(pow(y2 - y1, 2.0) + pow(x2 - x1, 2.0));
    cout << (int)(ceil)(d / r / 2) << endl;
    return 0;
}
