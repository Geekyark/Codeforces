#include<bits/stdc++.h>
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;
#define ll long long
#define pb push_back
int main(){
    FAST1;
    FAST2;
    int t;
    cin >> t;
    while (t--)
    {
        int height,width;
        cin>>height>>width;
        vector<vector<int>>ap(height,vector<int>(width,0));
        for(int i=0;i<width;i++)
        {
         ap[0][i]=(i%2==0?1:0);
        }
        for(int i=1;i<height;i++)
        {
         ap[i][width-1]=i%2==0?1:0;
        }
        for(int i=1;i<width;i++)
        {
         ap[height-1][width-i-1]=(i%2==0)?1:0;
        }
        for(int i=1;i<height-1;i++)
        {
         ap[i][0]=i%2==0?1:0;
        }
        ap[height-2][0]=0;
        for(int i=0;i<height;i++)
        {
         for(int j=0;j<width;j++)
         {
          cout<<ap[i][j];
         }
         cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
