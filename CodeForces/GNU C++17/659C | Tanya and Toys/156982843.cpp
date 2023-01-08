#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main(){
 fast;
 long long int n,m;
 cin>>n>>m;
 vector<long long int>vect(n);
 map<long long int,bool>vis;
 for(long long int i(0);i<n;i++){cin>>vect[i];vis[vect[i]]=1;}
 long long int som=0;
 long long int i=1;
 vector<long long int>res;
 while(som<=m){
  if(vis[i]==0){
  res.push_back(i);
  som+=i;}
  i++;
  }
 res.pop_back();
 cout<<res.size()<<endl;
 for(auto v:res)cout<<v<<" ";
 return 0; }  
 