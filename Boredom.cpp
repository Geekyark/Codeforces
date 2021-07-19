#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
ll dp[100005];
ll freq[100005];
int main(){
    FAST1;
    FAST2;
	int n,mx=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		freq[a[i]]++;
		mx=max(mx,a[i]);
	}

	dp[1]=freq[1];
	for(int i=2;i<=mx;i++){
		dp[i] = max((dp[i-2]+(freq[i]*i)),dp[i-1]);
	}
	cout<<dp[mx];

	return 0;
}
