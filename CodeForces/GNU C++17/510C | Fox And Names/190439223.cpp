#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
map<char,set<char>>adj;
vector<char>res;
map<char,char>parent;
vector<vector<char>>res1;bool test=true;
 vector<char>vect1(26);
 void dfs(char u,vector<char>res,map<char,bool>vis ){
 if(test==false)return;
 if(vis[u]==1){test=false;return;}
 res.push_back(u);
 vis[u]=1;
 if(adj[u].empty()){
  res1.push_back(res);return;}
 for(auto v:adj[u]){ 
  dfs(v,res,vis);
  }
 }
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<string>vect(n);
 
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<(n-1);i++){
   long long int j=0;
   while((j<min(vect[i].length(),vect[i+1].length()))and(vect[i][j]==vect[i+1][j])){
    j++;}
   if(j!=min(vect[i].length(),vect[i+1].length())){
    adj[vect[i][j]].insert(vect[i+1][j]);
    }
   else{
    if(vect[i].length()>vect[i+1].length()){test=false;break;}}
   }
 if(test==false)cout<<"Impossible"<<endl;
 else{
 long long int var=97;
 for(long long int i(0);i<26;i++){
   char d=(char)(var+i);
   vect1[i]=(d);}
 vector<char>res;
 map<char,bool>vis ;
 for(long long int i(0);i<26;i++){  
  char d=(char)(var+i);
  dfs(d,res,vis);
  if(test==false)break;
  }
 if(test==true){
 for(long long int i(0);i<res1.size();i++){vector<char>res2;
  for(long long int j(0);j<res1[i].size();j++){
   res2.push_back(find(vect1.begin(),vect1.end(),res1[i][j])-vect1.begin());
   }
  sort(res2.begin(),res2.end());
   for(long long int j(0);j<res1[i].size();j++){
   vect1[res2[j]]=res1[i][j];
   }
  }}
 if(test==false)cout<<"Impossible"<<endl;
 else{
 for(long long int i(0);i<26;i++)cout<<vect1[i];}}
 
return 0;}