#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,m;
 cin>>n>>m;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int som=0;
 map<pair<long long int,long long int>,bool>vis1;
 map<long long int,long long int>vis;
 map<long long int,long long int>vis2;
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   if(vect[i][j]=='*'){
    som++;
    vis1[make_pair(i,j)]=1;vis[i]++;vis2[j]++;}}}
 bool test=false;
 long long int val1=0;
 long long int val2=0;
 if((vis.empty())){cout<<"YES"<<endl;cout<<1<<" "<<1<<endl;}
 else{
 for(auto v:vis){
  for(auto v1:vis2){
   if(vis1[make_pair(v.first,v1.first)]==1){
    if((vis[v.first]+vis2[v1.first])>=(som+1)){
     test=true;val1=v.first;val2=v1.first;break;}}
   else{
    if((vis[v.first]+vis2[v1.first])>=(som)){
     test=true;val1=v.first;val2=v1.first;break;}}}if(test==true)break;}
  if(test==true){cout<<"YES"<<endl;cout<<(val1+1)<<" "<<(val2+1)<<endl;}
  else cout<<"NO"<<endl;
 }
  
 
    
    
 
    
    
 
    
    
return 0;} 