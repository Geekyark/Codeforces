#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
int main(){
    FAST1;
    FAST2;
    string old,news;
    cin>>old;
    for(ll i=0;i<old.size();i++){
            if(old[i]!='+'){
            news.push_back(old[i]);
       }
    }
       sort(news.begin(),news.end());
       cout<<news[0];
       for(ll i=1;i<news.length();i++){
        cout<<"+"<<news[i];
       }
    return 0;
}
