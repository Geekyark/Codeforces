#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
int main(){
    FAST1;
    FAST2;
    int test_case;
    cin>>test_case;
    while(test_case--){
        string s,t;
        cin>>s>>t;
        int len1 = s.length(),len2=t.length(),index1=0,index2=0;
        while(index1<len1&&s[index1]!=t[index2]){
            index1++;
        }
        if(index1==len1){
        cout<<"NO"<<"\n";
        continue;
       }
       while(index1<len1&&index2<len2 && s[index1]==t[index2]){
            index1++,index2++;
        }
        if(index2==index2){
        cout<<"YES"<<endl;
        continue;
       }
       index1-=2;
       while(index1>=0 && s[index1]!=t[index2]){
        index1--;
        }
       if(index1<0){
       cout<<"NO\n";
       continue;
      }
      while(index1>=0 && index2<len2 && s[index1]==t[index2] ){
        index1--,index2++;
      }
      if(index2==len2){
      cout<<"YES\n";
      continue;
     }else{
    cout<<"NO\n";
   }
 }
 return 0;
}
