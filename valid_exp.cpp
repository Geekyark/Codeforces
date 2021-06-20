#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool Isvalid(char str){
     stack<int>s;
     for(int i=0;str!='\0';i++){
        char ch= str[i];
        if(ch=='('){
            s.push(ch);
           }
           else if(ch==')'){
            if(s.empty()|| s.top()!='(')
                return false;
           }
           s.pop();
     }
     return s.empty();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        char str;
        cin>>str;
        if(Isvalid(str)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
