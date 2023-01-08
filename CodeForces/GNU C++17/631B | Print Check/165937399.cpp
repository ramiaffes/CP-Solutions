#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
map<long long int,bool>vis;
map<long long int,bool>res1;
map<long long int,bool>res2;vector<long long int>vect(N);
 
int main()
{
 fast; 
 long long int n,m,k,val1,val2,val3;
 map<long long int,long long int>hashing;
 map<long long int,long long int>hashing2;
 map<long long int,long long int>timer;
 map<long long int,long long int>timer2;
 cin>>n>>m>>k;
 for(long long int i(0);i<k;i++){
  cin>>val1>>val2>>val3;
  if(val1==1){
   hashing[val2]=val3;
   timer[val2]=i+1;}
  else{
   hashing2[val2]=val3;
   timer2[val2]=i+1;}
  }
 for(long long int i(0);i<n;i++){
  for(long long int j(0);j<m;j++){
   if(timer[i+1]<timer2[j+1]){
   cout<<hashing2[j+1]<<" ";}
  else{
   cout<<hashing[i+1]<<" ";}}
  cout<<endl;}
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}