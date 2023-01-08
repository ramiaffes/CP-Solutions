#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int n,t;
 cin>>t;
 string s;
 while(t--){
  cin>>s;
  long long int som=0;
  pair<long long int,long long int> val=make_pair(0,0);
  map<pair<pair<long long int,long long int>,pair<long long int,long long int>>,bool>vis;
  for(long long int i(0);i<s.length();i++){
   if(s[i]=='N'){
    if(vis[make_pair(val,make_pair(val.first-1,val.second))]==1){
     som+=1;}
   else som+=5;
   vis[make_pair(val,make_pair(val.first-1,val.second))]=1;
   vis[make_pair(make_pair(val.first-1,val.second),val)]=1;
    val.first--;}
  else if(s[i]=='S'){
    if(vis[make_pair(val,make_pair(val.first+1,val.second))]==1){
     som+=1;}
   else som+=5;
   vis[make_pair(val,make_pair(val.first+1,val.second))]=1;
   vis[make_pair(make_pair(val.first+1,val.second),val)]=1;
   val.first++;}
  else if(s[i]=='W'){
    if(vis[make_pair(val,make_pair(val.first,val.second-1))]==1){
     som+=1;}
   else som+=5;
   vis[make_pair(val,make_pair(val.first,val.second-1))]=1;
   vis[make_pair(make_pair(val.first,val.second-1),val)]=1;
   val.second--;}
  else { if(vis[make_pair(val,make_pair(val.first,val.second+1))]==1){
     som+=1;}
   else som+=5;
   vis[make_pair(val,make_pair(val.first,val.second+1))]=1;
   vis[make_pair(make_pair(val.first,val.second+1),val)]=1;
   val.second++;}}
  
  cout<<som<<endl;}
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}