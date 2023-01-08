#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast;
 
 long long int n,k,a,b,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  map<long long int,bool>vis;
  map<long long int,long long int>hashing;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  long long int som=0;
  for(long long int i(n-1);i>=0;i--){
   som+=vect[i];
   vis[som]=1;
   
   hashing[som]=i;}
 som=0;
 long long int val=0;
 for(long long int i(0);i<n;i++){
  som+=vect[i];
  if((vis[som]==1)and(hashing[som]>i)){val=i+n-hashing[som]+1;}
  if((vis[som]==1)and(hashing[som]<=i))break;
  }
cout<<val<<endl;
 
  }
 
return 0;}  