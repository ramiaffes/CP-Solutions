#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 string s;
 long long int n,a,b;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]++;}
 long long int val=1;
 while((hashing[val]!=0)and(val!=(n+1))){val++;}
 map<long long int,bool>vis;
 long long int som=0;
 if(val!=(n+1)){
 for(long long int i(0);i<n;i++){
  if((vis[vect[i]]==1)){
   vect[i]=val;
   hashing[val]++;som++;
   while((hashing[val]!=0)and(val!=(n+1))){val++;}
   if(val==(n+1))break;}
  else if(hashing[vect[i]]==1)continue;
  else if(hashing[vect[i]]>=2){
   if(val>vect[i]){
    vis[vect[i]]=1;
    hashing[vect[i]]--;}
   else{
   hashing[vect[i]]--;
   som++;
   vect[i]=val;
   hashing[val]++;
   while((hashing[val]!=0)and(val!=(n+1))){val++;}
   if(val==(n+1))break;}
   }
  
  }}
 cout<<som<<endl;
 for(auto v:vect)cout<<v<<" ";
 
 
 
  
 
 
    
    
 
    
    
 
    
    
return 0;}