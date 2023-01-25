#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 long long int t,n;
 string s1;
 string s2;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s1;
  cin>>s2;
vector<long long int> adj(n+1);
map<long long int,bool>vis;
 for(long long int i(0);i<n;i++){
  if((s2[i]=='1')and(s1[i]=='0')){
   adj[i+1]=(i+1);
   }
  else if((i>=1)and(vis[i]!=1)){
   if((s2[i]=='1')and((s1[i-1]=='1'))){
   adj[i+1]=(i);}
  else if(i<(n-1)){
  if((s2[i]=='1')and((s1[i+1]=='1'))){
   adj[i+1]=(i+2);
   vis[i+2]=1;
   } }}
  else if(i<(n-1) and(vis[i+2]!=1)){
  if((s2[i]=='1')and((s1[i+1]=='1'))){
   adj[i+1]=(i+2);
   vis[i+2]=1;
   }}
  
  }
  long long int som=0;
 for(long long int i(0);i<n;i++){
  if((adj[i+1]!=0)){
   som++;
   }}
 cout<<som<<endl;
 
 }
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}