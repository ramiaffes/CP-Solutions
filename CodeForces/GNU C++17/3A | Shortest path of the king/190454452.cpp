#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<pair<char, int>,vector<pair<char,int>>>adj;
map<pair<char, int>,bool>vis;
map<pair<char,int> ,long long int> dist;
long long int som=0;
void bfs(pair<char, int> src){
 dist[src]=0;
 queue<pair<char,int>>q;
 q.push(src);
 while(!q.empty()){
  pair<char,int> u=q.front();
  q.pop();
  if(vis[u])continue;
  vis[u]=1;
  for(auto v:adj[u]){
   if(vis[v])continue;
   dist[v]=min(dist[v],(dist[u]+1));
   q.push(v);}
  }}
bool test=true;
void act(vector<pair<char,int>>res){
 for(long long int i(0);i<(res.size()-1);i++){
  if(res[i].first<res[i+1].first){
   if(res[i].second<res[i+1].second){
    cout<<"RU"<<endl;}
   else if(res[i].second==res[i+1].second){
    cout<<"R"<<endl;}
   else{
    cout<<"RD"<<endl;}}
  else if(res[i].first==res[i+1].first){
   if(res[i].second<res[i+1].second){
    cout<<"U"<<endl;}
   else if(res[i].second==res[i+1].second){
    cout<<endl;}
   else{
    cout<<"D"<<endl;}}
  else{
    if(res[i].second<res[i+1].second){
    cout<<"LU"<<endl;}
   else if(res[i].second==res[i+1].second){
    cout<<"L"<<endl;}
   else{
    cout<<"LD"<<endl;}}}
 }
void dfs(pair<char,int>u,long long int som,long long int val,vector<pair<char,int>>res,pair<char,int>goal){
 res.push_back(u); 
 if(som==val){if((u==goal)and(test==true)){act(res);test=false;}return;}
 if(adj[u].empty())return;
 som++;
 for(auto v:adj[u]){
  dfs(v,som,val,res,goal);
  }}
int main()
{
 fast; 
 char s1;
 int s2;
 char t1;
 int t2;
 cin>>s1>>s2>>t1>>t2;
 for(long long int j(1);j<=8;j++){
  for(char i('a');i<='h';i++){
   dist[make_pair(i,j)]=1e5;
    if(j<8){
    adj[make_pair(i,j)].push_back(make_pair(i,(j+1)));
    adj[make_pair(i,(j+1))].push_back(make_pair(i,j));
    if(i<'h'){
    adj[make_pair(i,j)].push_back(make_pair(i+1,(j+1)));
    adj[make_pair(i+1,(j+1))].push_back(make_pair(i,j));
    }
    if(i>'a'){
    adj[make_pair(i,j)].push_back(make_pair(i-1,(j+1)));
    adj[make_pair(i-1,(j+1))].push_back(make_pair(i,j));
    }
    }
    if(i<'h'){
    adj[make_pair(i,j)].push_back((make_pair(i+1,j)));
    adj[make_pair(i+1,j)].push_back(make_pair(i,j));
     }
      }}
   bfs(make_pair(s1,s2));
   vector<pair<char,int>>res;cout<<dist[make_pair(t1,t2)]<<endl;
   dfs(make_pair(s1,s2),0,dist[make_pair(t1,t2)],res,make_pair(t1,t2));
   
   
   
   
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}