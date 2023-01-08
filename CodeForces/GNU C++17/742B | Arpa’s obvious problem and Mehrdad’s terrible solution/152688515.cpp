#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int n,x;
 cin>>n>>x;
 long long int som=0;
 map<long long int,long long int>hashing;
 vector<long long int>vect(n);
 map<long long int,bool>vis;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  vis[vect[i]]=1;
  hashing[vect[i]]++;
  }
 if(x!=0){
 for(long long int i(0);i<n;i++){
  if(vis[x^vect[i]]==1){
   som+=hashing[x^vect[i]];}}
 cout<<(som/2)<<endl;}
 else{
  for(long long int i(0);i<n;i++){
  if(vis[x^vect[i]]==1){
   som+=hashing[x^vect[i]]-1;}}
 cout<<(som/2)<<endl;}
 
  
  
 
 
    
return 0;}