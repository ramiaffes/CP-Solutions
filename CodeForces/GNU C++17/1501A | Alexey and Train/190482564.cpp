#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj(N);
bool vis[N];
void dfs(long long int u){
 if(vis[u])return ;
 vis[u]=1;
 dfs(adj[u]);}
int main()
{
 fast; 
 long long int t;
 cin>>t;
 while(t--){
  long long int n;
  cin>>n;
  long long int som=0;
  vector< long long int>vect(n);
  vector< long long int>vect1(n);
  vector< long long int>vect2(n);for(long long int i(0);i<n;i++){
   cin>>vect1[i]>>vect2[i];
   }
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
  if(n==1){
   cout<<(vect1[0]+vect[0])<<endl;}
  else{
   if((vect2[0]-vect1[0])%2==0){
  som=max(vect1[0]+vect[0]+(vect2[0]-vect1[0])/2,vect2[0]);}
 else{
  som=max(vect1[0]+vect[0]+((vect2[0]-vect1[0])/2+1),vect2[0]);}
  for(long long int i(1);i<(n-1);i++){
   som+=vect1[i]-vect2[i-1]+vect[i];
   if(((vect2[i]-vect1[i])%2)==0){
   som=som+(vect2[i]-vect1[i])/2;}
   else{
    som=som+((vect2[i]-vect1[i])/2+1);}
   som=max(som,vect2[i]);
  
   }
  som+=vect1[n-1]-vect2[n-2]+vect[n-1];
  cout<<som<<endl;}}
  
  
 
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}