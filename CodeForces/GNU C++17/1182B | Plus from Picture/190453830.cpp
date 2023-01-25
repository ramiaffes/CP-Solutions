#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
  
  
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 vector<char>vect1(m);
 vector<vector<char>>vect(n,vect1);
 for(long long int i(0);i<n;i++){
 for(long long int j(0);j<m;j++){
  
   cin>>vect[i][j];
  }
  }
 for(long long int i(0);i<n;i++){
 for(long long int j(0);j<m;j++){
  if((i>=1)and(vect[i][j]=='*')and(vect[i-1][j]=='*')){
  adj[make_pair(i,j)].push_back(make_pair((i-1),j));}
  if(i<(n-1)and(vect[i][j]=='*')and(vect[i+1][j]=='*')){
  adj[make_pair(i,j)].push_back(make_pair((i+1),j));}
  if((j>=1)and(vect[i][j]=='*')and(vect[i][j-1]=='*')){
  adj[make_pair(i,j)].push_back(make_pair((i),(j-1)));}
  if((j<(m-1))and(vect[i][j]=='*')and(vect[i][j+1]=='*')){
  adj[make_pair(i,j)].push_back(make_pair((i),(j+1)));}
  }}
 pair<long long int,long long int> val;
 bool test1=false;
 for(long long int i(0);i<n;i++){
 for(long long int j(0);j<m;j++){ 
 if((adj[make_pair(i,j)].size()==4)){val=make_pair(i,j);test1=true;break;}}if(test1==true)break;}
 if(test1==false)cout<<"NO"<<endl;
 else{
 long long int i=val.first;
 long long int j=val.second;
 long long int val1=i;
 while((val1<n)and(vect[val1][j]=='*')){
  vis[make_pair(val1,j)]=true;
  val1++;}
 val1=j;
 while((val1<m)and(vect[i][val1]=='*')){
  vis[make_pair(i,val1)]=true;
  val1++;}
  val1=j;
  while((val1>=0)and(vect[i][val1]=='*')){
  vis[make_pair(i,val1)]=true;
  val1--;}
  val1=i;
  while((val1>=0)and(vect[val1][j]=='*')){
  vis[make_pair(val1,j)]=true;
  val1--;}
 bool test=true;
 for(long long int i(0);i<n;i++){
 for(long long int j(0);j<m;j++){
  if((vect[i][j]=='*')and(vis[make_pair(i,j)]==false)){test=false;break;}}if(test==false)break;}
 if(test==true) cout<<"Yes"<<endl;
 else cout<<"NO"<<endl;}
  
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}