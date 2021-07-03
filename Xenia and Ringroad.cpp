#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
int main(){
    FAST1;
    FAST2;
    int n, m;
    cin>>n>>m;

    int loc = 1;
    long long int ans = 0;
    for(int i=0; i<m; i++)
    {
        int now;
        cin>>now;

        if(now >= loc)
            ans += now - loc;
        else
            ans += n - (loc - now);
        loc = now;
    }

    cout << ans << endl;

    return 0;
}
