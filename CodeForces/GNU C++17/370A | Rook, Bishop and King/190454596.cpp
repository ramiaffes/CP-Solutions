#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>> adj3;
map<pair<long long int,long long int> ,bool>vis3;
map<pair<long long int,long long int> ,long long int> dist3;
 
void bfs3(pair<long long int,long long int> src){
 dist3[src]=0;
 queue<pair<long long int,long long int>>q;
 q.push(src);
 while(!q.empty()){
  pair<long long int,long long int> u=q.front();
  q.pop();
  if(vis3[u])continue;
  vis3[u]=1;
  for(auto v:adj3[u]){
   if(vis3[v])continue;
   dist3[v]=min(dist3[v],(dist3[u]+1));
   q.push(v);}
  }}
int main()
{
 fast; 
 long long int r1,c1,r2,c2;
 cin>>r1>>c1>>r2>>c2;
 for(long long int i(1);i<=8;i++){
  for(long long int j(1);j<=8;j++){
   dist3[make_pair(i,j)]=1e6;
   if(i<8){
   adj3[make_pair(i,j)].push_back(make_pair(i+1,j));
   adj3[make_pair(i+1,j)].push_back(make_pair(i,j));
   
   }
   if(j<8){
   adj3[make_pair(i,j)].push_back(make_pair(i,j+1));
   adj3[make_pair(i,j+1)].push_back(make_pair(i,j));}
   if((i<8)and(j<8)){
    adj3[make_pair(i,j)].push_back(make_pair(i+1,j+1));
    adj3[make_pair(i+1,j+1)].push_back(make_pair(i,j));
    }
   if((i>1)and(j<8)){
    adj3[make_pair(i,j)].push_back(make_pair(i-1,j+1));
    adj3[make_pair(i-1,j+1)].push_back(make_pair(i,j));}
   }}
   bfs3(make_pair(r1,c1));
 long long int som1=0;
 if (r2!=r1)som1++;
 if(c1!=c2)som1++;
 cout<<som1<<" ";
 if((abs(r1-r2)%2!=abs(c1-c2)%2)or(som1==0))cout<<0<<" ";
 else if(abs(r1-r2)!=abs(c1-c2)) cout<<2<<" ";
 else cout<<1<<" ";
 if(dist3[make_pair(r2,c2)]==1e6){
    cout<<0<<" ";}
   else{
    cout<<dist3[make_pair(r2,c2)]<<" ";}
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}