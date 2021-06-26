#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    int n;
    int maxvalue=0;
    int minvalue=1000;
    int maxindex=0;
    int minindex=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    if(x>maxvalue){
        maxindex=i;
        maxvalue=x;
    }
     if(x<=minvalue){
        minindex=i;
        minvalue=x;
     }
}
    if(maxindex>minindex){
        cout<<(maxindex-1)+(n-minindex)-1;
    }
    else{
        cout<<(maxindex-1)+(n-minindex);

    }
	return 0;
}
