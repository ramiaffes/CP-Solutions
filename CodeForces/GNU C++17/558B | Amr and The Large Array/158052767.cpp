#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 map<long long int,long long int>hashing;
 map<long long int,long long int>vis;
 long long int ans1=1e9;
 for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]]++;if(vis[vect[i]]==0){vis[vect[i]]=i+1;}}
 long long int ans=0;
 for(auto v:hashing){
  ans=max(ans,hashing[v.first]);}
 map<long long int,long long int>hashing1;
 long long int val1=0;
 long long int val2=0;
 for(long long int i(0);i<n;i++){
  hashing1[vect[i]]++;
  if(ans==hashing1[vect[i]]){
   if((i+1-vis[vect[i]])<ans1){
    ans1=i+1-vis[vect[i]];
    val1=vis[vect[i]];
    val2=i+1;}}}
 cout<<val1<<" "<<val2<<endl;
  
 
 
    
    
 
    
    
 
    
    
return 0;}