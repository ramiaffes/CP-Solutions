#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
int main()
{
 fast;
 long long int n;
 string s,t;
 cin>>n;
 cin>>s;
 cin>>t;
 map<pair<long long int,long long int>,bool>vis;
 map<pair<long long int,long long int>,long long int>hashing;
 long long int var=0;
 for(long long int i(0);i<n;i++){
  if(s[i]!=t[i]){
   var++;}}
bool test=false;
 for(long long int i(0);i<n;i++){
  if(s[i]!=t[i]){
   vis[make_pair(s[i],t[i])]=1;
   hashing[make_pair(s[i],t[i])]=i+1;
   if((vis[make_pair(t[i],s[i])])==1){
    test=true;
    cout<<(var-2)<<endl;
    cout<<(i+1)<<" "<<hashing[make_pair(t[i],s[i])]<<endl;break;
    }}}
 if(test==false){
  map<long long int,bool>vis1;
  map<long long int,long long int>hashing1;
 for(long long int i(0);i<n;i++){
  if(s[i]!=t[i]){
   vis1[s[i]]=1;
   hashing1[s[i]]=i+1;
  }
  }
 for(long long int i(0);i<n;i++){
  if(s[i]!=t[i]){
   if(vis1[t[i]]==1){
    test=true;
    cout<<(var-1)<<endl;
    cout<<i+1<<" "<<hashing1[t[i]]<<endl;break;}
  }
  }
 }
 if(test==false){
  cout<<var<<endl;
  cout<<-1<<" "<<-1<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  