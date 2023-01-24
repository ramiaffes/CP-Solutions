#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 cin>>s;
 map<pair<long long int,long long int>,bool>vis;
 map<pair<long long int,long long int>,bool>vis2;
 pair<long long int,long long int>p1=make_pair(0,0);
 vis[p1]=1;
 bool test=true;
 vector<pair<long long int,long long int>>res;
 res.push_back(p1);
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='L'){
   p1.first-=1;
   if(vis[p1]==1){test=false;break;}
   vis[p1]=1;}
  else if(s[i]=='U'){
   p1.second+=1;
   if(vis[p1]==1){test=false;break;}
   vis[p1]=1;
   }
  else if(s[i]=='D'){
   p1.second-=1;
   if(vis[p1]==1){test=false;break;}
   vis[p1]=1;
   }
  else{
   p1.first+=1;
   if(vis[p1]==1){test=false;break;}
   vis[p1]=1;}
   res.push_back(p1);}
 if(test==true){
  vis2[res[0]]=1;
  for(long long int i(1);i<res.size();i++){
   pair<long long int,long long int>val=make_pair(res[i].first+1,res[i].second);
   if((vis2[val]==1)and(res[i-1]!=val)){
    test=false;break;}
   val=make_pair(res[i].first-1,res[i].second);
   if((vis2[val]==1)and(res[i-1]!=val)){
    test=false;break;}
   val=make_pair(res[i].first,res[i].second+1);
    if((vis2[val]==1)and(res[i-1]!=val)){
    test=false;break;}
   val=make_pair(res[i].first,res[i].second-1);
   if((vis2[val]==1)and(res[i-1]!=val)){
    test=false;break;}
   vis2[res[i]]=1;
   }
  if(test==true)cout<<"OK"<<endl;
  else cout<<"BUG"<<endl;
  }
 else {cout<<"BUG"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}