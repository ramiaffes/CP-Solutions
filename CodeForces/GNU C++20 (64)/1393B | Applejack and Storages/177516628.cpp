#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 long long int n,q,x;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 cin>>q;
 char var;
 map<long long int,long long int>hashing;
 map<long long int,long long int>hashing2;
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]++;}
for(auto v:hashing){
 hashing2[2]+=hashing[v.first]/2;
 hashing2[4]+=hashing[v.first]/4;}
 for(long long int i(0);i<q;i++){
  cin>>var>>x;
  hashing2[2]-=hashing[x]/2;
  hashing2[4]-=hashing[x]/4;
  if(var=='+'){
   hashing[x]++;}
 else{
  hashing[x]--;}
  hashing2[2]+=hashing[x]/2;
  hashing2[4]+=hashing[x]/4;
 if((((hashing2[2]-(hashing2[4]*2))>=2)and(hashing2[4]==1))or(hashing2[4]>=2)){
  cout<<"YES"<<endl;}
 else cout<<"NO"<<endl;
 }
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}