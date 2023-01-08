#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
 
int main()
{
 fast;
long long int n,m,v,t,k,pos;
cin>>n;
map<long long int,vector<long long int>>hashing;
vector<long long int>vect(n);
long long int val2=0;
for(long long int i(0);i<n;i++){cin>>vect[i];hashing[vect[i]].push_back(i);}
sort(vect.begin(),vect.end());
cin>>m;
for(long long int i(0);i<m;i++){
 cin>>k>>pos;
 map<long long int,long long int>hashing1;
 long long int val=0;
 map<long long int,bool>vis;
 while(val<pos){
  long long int ans=1e9;
 for(long long int d(n-k);d<n;d++){
  if(vis[d]==0)
  ans=min(ans,hashing[vect[d]][hashing1[vect[d]]]);
  }
 for(long long int d(n-k);d<n;d++){
  if(vis[d]==0){
  if(ans==hashing[vect[d]][hashing1[vect[d]]]){val2=vect[d];hashing1[vect[d]]++;vis[d]=1;break;}}}
 
val++;
 }
cout<<val2<<endl;}
   return 0;}