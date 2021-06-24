#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
bool compare(int a,int b){
    if(a>b)
        return true;
    return false;
}
int main(){
    FAST1;
    FAST2;
    ll n,brosum=0,mysum=0,count=0;
    cin>>n;
    int a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        brosum+=a[i];
    }
    sort(a,a+n,compare);
    for(ll i=0;i<n;i++){
        mysum+=a[i];
        brosum-=a[i];
        count++;
        if(mysum>brosum){
            break;
        }
    }
    cout<<count<<endl;
}
