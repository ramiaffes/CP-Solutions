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
  long long int n;
  cin>>n;
  vector< long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
  sort(vect.begin(),vect.end());
  for( long long int i(0);i<(n-1);i++){
   for( long long int j(i+1);j<n;j++){
    if(vect[j]==2*vect[i]){
     adj[i+1]=(j+1);
     }
    
    }
   
  }
  for( long long int i(0);i<n;i++){
   if(vis[i+1]!=1){
    for( long long int j(0);j<n;j++){
     if(vect[j]==3*vect[i]){
      adj[j+1]=i+1;
      break;}}}
      dfs(i+1);}
   long long int i=0;
  while(i<n){
    long long int j=0;
   while(j<n){
    if((i+1)==adj[j+1]){
     break;}
    j++;
    }
    if(j==n){break;}i++;}
   long long int dr=i+1;
  for(long long int i(0);i<(n-1);i++){
   cout<<vect[dr-1]<<" ";
   dr=adj[dr];
   }
  cout<<vect[dr-1]<<endl;
  
 
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}