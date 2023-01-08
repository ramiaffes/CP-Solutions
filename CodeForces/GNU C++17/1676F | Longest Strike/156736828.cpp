#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int N=1e9; 
int main()
{
 fast;
long long int n,t,m,k;
cin>>t;
string s;
while(t--){
 cin>>n>>k;
 vector<long long int>vect(n);
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  hashing[vect[i]]++;
  }
 long long int res1=0;
 long long int res2=0;
 sort(vect.begin(),vect.end());
 long long int ans=0;
 long long int som=0;
  auto ip = unique(vect.begin(), vect.end());
    vect.resize(distance(vect.begin(), ip));
    long long int v=vect[0];
    for(long long int i(0);i<(vect.size()-1);i++){
  if(hashing[vect[i]]>=k){
   som++;
  if(vect[i]!=(vect[i+1]-1)){
   if(som>ans){res1=v;res2=vect[i];ans=som;}som=0;v=vect[i+1];}}
  else{
   if(som==0){v=vect[i+1];continue;}
   else if(som>ans){res1=v;res2=vect[i-1];ans=som;}som=0;v=vect[i+1];}
  }
 if(hashing[vect[vect.size()-1]]>=k){som++;
 if(som>ans){
  res1=v;res2=vect[vect.size()-1];ans=som;}}
 else if(som>ans){
  res1=v;res2=vect[vect.size()-2];ans=som;}
 if(ans==0)cout<<-1<<endl;
 else cout<<res1<<" "<<res2<<endl;
 
 
}
  return 0;}