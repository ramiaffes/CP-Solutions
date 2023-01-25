#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
vector<long long int> adj[N];
 
long long int max1=1;
bool vis[N];
void dfs(long long int u,long long int level){
 vis[u]=1;
 if(adj[u].empty())return;
 level+=1;
 for(auto v:adj[u]){
  dfs(v,level);
  if(max1<=level){
   max1=level;}
  }}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  getline(cin >> ws, vect[i]);
  }
 long long int num=1;
    map<string,long long int>mas;
 string delimiter = " reposted ";
    for(long long int i(0);i<n;i++){
  string s=vect[i];
  string token1 = s.substr(0, s.find(delimiter));
  string token2=s.substr(s.find(delimiter)+10,s.length() );
  for(long long int i(0);i<token1.length();i++){
  token1[i]=tolower(token1[i]);}
  for(long long int i(0);i<token2.length();i++){
  token2[i]=tolower(token2[i]);}
  if(mas.find(token1)==mas.end()){
  mas[token1]=num;
  num++;}
  if(mas.find(token2)==mas.end()){
  mas[token2]=num;
  num++;}
  adj[mas[token2]].push_back(mas[token1]);
  }
 dfs(mas["polycarp"],1);
 cout<<max1<<endl;
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}