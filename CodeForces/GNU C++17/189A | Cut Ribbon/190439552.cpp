#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=1e7;
const long int N=1e6;
vector<long long int>dp(N);
map<long long int,bool>vis;
map<long long int,bool>test;
void remplir1(long long int n,long long int b,long long int c){
 if(n==b){test[b]=1;return;}
 if(n==c){test[c]=1;return;}
 if(n>=b){if(vis[n-b]==0){remplir1(n-b,b,c);vis[n-b]=1;}if(test[n-b]==1){dp[n]=max(1+dp[n-b],dp[n]);test[n]=1;}
 }
 if(n>=c){if(vis[n-c]==0){remplir1(n-c,b,c);vis[n-c]=1;}if(test[n-c]==1){dp[n]=max(1+dp[n-c],dp[n]);test[n]=1;}
 }}
void remplir(long long int n,long long int a,long long int b,long long int c){
 if(n==a){test[a]=1;return;}
 if(n==b){test[b]=1;return;}
 if(n==c){test[c]=1;return;}
 if(n>=a){if(vis[n-a]==0){remplir(n-a,a,b,c);vis[n-a]=1;}if(test[n-a]==1){dp[n]=max(1+dp[n-a],dp[n]);test[n]=1;}}
 if(n>=b){if(vis[n-b]==0){remplir(n-b,a,b,c);vis[n-b]=1;}if(test[n-b]==1){dp[n]=max(1+dp[n-b],dp[n]);test[n]=1;}
 }
 if(n>=c){if(vis[n-c]==0){remplir(n-c,a,b,c);vis[n-c]=1;}if(test[n-c]==1){dp[n]=max(1+dp[n-c],dp[n]);test[n]=1;}
 }}
 
int main()
{
 fast;
   long long int n,a,b,c;
   cin>>n>>a>>b>>c;
   dp.resize(n+1);
   dp[a]=1;
   dp[b]=1;
   dp[c]=1;
   vector<long long int>vect1(3);
   vect1[0]=a;
   vect1[1]=b;
   vect1[2]=c;
   sort(vect1.begin(),vect1.end());
   remplir1(vect1[2],vect1[0],vect1[0]);
   remplir1(vect1[1],vect1[0],vect1[0]);
   vis.clear();
   remplir1(vect1[2],vect1[1],vect1[0]);
   remplir(n,a,b,c);
   cout<<dp[n]<<endl;
   
   
 
 
   
 
 
 
 
return 0;}