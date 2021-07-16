#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    int one,zero;
   cin>>zero>>one;
    string s;

   /// minimum limit of n
   if(one>2*(zero+1))
   {
       cout<<"-1"<<endl;
       return 0;
   }

   /// maximum limit of n
   if(zero>one+1)
   {
       cout<<"-1"<<endl;
       return 0;
   }

   else
   {
       while(zero+one)
       {
           /// place zero,zero more than one
           if(zero==one+1)
           {
               s+="0";
               zero--;
           }

           else if(one>zero && zero>0)
           {
               s+="110";
               one-=2;
               zero--;
           }

           else
           {
               s+="1";
               one--;
           }
       }
   }

   cout<<s<<endl;

   return 0;

}
