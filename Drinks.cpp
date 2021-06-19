#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    double sd,sum=0;
    for(int i=0;i<n;i++){
        cin>>sd;
        sum+=sd;
    }
    double ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;

}
