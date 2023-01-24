#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,m,s,t;
 cin>>n>>m;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 map<long long int,long long int>adj;
 map<long long int,long long int>adj1;
 map<long long int ,long long int> dist;
 map<long long int ,long long int> dist1;
 for(long long int i(1);i<=n;i++){
  adj[i]=(i+1);
  adj1[i+1]=(i);}
 long long int val=1;
 long long int som=0;
 while(val!=0){
  if(vect[val-1]>vect[adj[val]-1]){
   som+=vect[val-1]-vect[adj[val]-1];}
  val=adj[val];dist[val]=som;}
 som=0;
 val=n;
 while(val!=0){
  if(vect[val-1]>vect[adj1[val]-1]){
   som+=vect[val-1]-vect[adj1[val]-1];}
  val=adj1[val];dist1[val]=som;}
 for(long long int i(0);i<m;i++){
  cin>>s>>t;
  if(s>=t){
   cout<<(dist1[t]-dist1[s])<<endl;}
  else{
   cout<<(dist[t]-dist[s])<<endl;}}
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}