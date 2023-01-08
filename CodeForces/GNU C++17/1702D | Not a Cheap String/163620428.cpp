#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,p;
 string w;
 cin>>t;
 while(t--){
  cin>>w;
  cin>>p;
  vector<pair<long long int,long long int>>res;long long int som=0;
  for(long long int i(0);i<w.length();i++){
   som+=(w[i]-97+1);
   res.push_back(make_pair(w[i]-97+1,i));}
  sort(res.begin(),res.end());
  map<long long int,bool>vis;
  long long int i=res.size()-1;
  
  while((i>=0)and(som>p)){
   vis[res[i].second]=1;
   som-=res[i].first;
      i--;
  }
  string res1;
  for(long long int i(0);i<w.length();i++){
   if(vis[i]==0){
       string s1(1,w[i]);
    res1.append(s1);}}
  cout<<res1<<endl;}
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}