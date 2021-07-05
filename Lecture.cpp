#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    for(int i=0;i<m;i++)
    {
        string x,y;cin>>x>>y;
        if(x.length()>y.length())
        {
            mp[x]=y;
        }
        else
        {
            mp[x]=x;
        }
    }
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        cout<<mp[x]<<" ";
    }
    cout<<"\n";
    return 0;
}
