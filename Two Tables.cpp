#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define pb push_back
#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    FAST1;
    FAST2;
    ll test_case;
    cin >>test_case;
    while(test_case--)
    {
      ll W,H;
      cin>>W>>H;
      ll ap,bk,ck,dk;
      cin>>ap>>bk>>ck>>dk;
      ll w,h;
      cin>>w>>h;
      ll w_1=ap;
      ll h_1=bk;
      ll w_2=W-ck;
      ll h_2=H-dk;
      if(w_1>=w || w_2>=w || h_1>=h || h_2>=h)
      cout<<0<<endl;
      else
        {
          ll quick=ck-ap;
          quick=quick+w;
          ll epic=dk-bk;
          epic=epic+h;
      if(quick<=W && epic<=H)
        {
          double mini=min(w_1,w_2);
          double nimi=min(h_1,h_2);
          mini=mini*mini;
          nimi=nimi*nimi;
          double dk=sqrt(mini+nimi);
          cout<<dk<<endl;
        }
      else if(quick<=W)
        {
          ll minimum=min(w_1,w_2);
          cout<<minimum<<endl;
        }
      else if(epic<=H)
        {
      ll minimum=min(h_1,h_2);
    if(minimum>0){
      cout<<minimum<<".000000000"<<endl;;
    }
    else{
        cout<<minimum<<endl;
    }
    }
   else
   cout<<-1<<endl;
  }
 }
}
