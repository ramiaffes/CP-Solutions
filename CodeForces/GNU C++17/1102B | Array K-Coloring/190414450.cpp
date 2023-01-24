#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,d,k;
    cin>>n>>k;
    vector<long long int>vect(n);
    map<long long int,vector<long long int>>hashing;
    for(long long int i(0);i<n;i++){
  cin>>vect[i];
  hashing[vect[i]].push_back(i);}
 long long int ans=0;
 for(auto v:hashing){
  long long int val=hashing[v.first].size();
  ans=max(ans,val);}
 if(ans>k){
  cout<<"NO"<<endl;}
 else{
  cout<<"YES"<<endl;
  vector<long long int>vect1(n);long long int val=1;
   for(auto v:hashing){
    while(hashing[v.first].size()>0){
     vect1[hashing[v.first][hashing[v.first].size()-1]]=val;
     hashing[v.first].pop_back();
     val++;
     if(val==(k+1))val=1;}}
  
  
  for(long long int i(0);i<n;i++){
   cout<<vect1[i]<<" ";}
 }
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}