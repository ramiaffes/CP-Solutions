#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,bool>vis;
map<string,long long int>hashing;
int main()
{
 fast;
 long long int n;
 cin>>n;
 set<string>res;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){cin>>vect[i];}
 vector<string>vect1(vect.begin(),vect.end());
bool test=true;
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]=1;}
 for(long long int i(0);i<n;i++){
  map<string,bool>vis;
  long long int som=0;
  while(vis[vect[i]]==0){
   hashing[vect[i]]+=som;
   som++;
   vis[vect[i]]=1;
   string var(1,vect[i][0]);
   vect[i].erase(0,1);
   vect[i].append(var);
   }
  for(long long int i(0);i<vect1.size();i++){
   if(vis[vect1[i]]==0){test=false;break;}}
  
  }
 long long int ans=1e6;
 for(auto v:hashing){
  ans=min(ans,v.second-1);}
 if(test==false){
  cout<<-1<<endl;}
 else{
 cout<<ans<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}