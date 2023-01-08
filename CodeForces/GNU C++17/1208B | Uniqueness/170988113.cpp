#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 map<long long int,long long int>hashing;
 for(long long int i(0);i<n;i++){
  hashing[vect[i]]++;}
 long long int som2=0;
 for(auto v:hashing){
  if(hashing[v.first]>=2)som2++;}
 if(som2==0){
  cout<<0<<endl;}
 else{
 long long int ans=1e6;
 long long int som=0;
 for(long long int j(0);j<n;j++){
  map<long long int,long long int>hashing1=hashing;
  som=0;
  for(long long int i(j);i>=0;i--){
   if(hashing1[vect[i]]>1){
    hashing1[vect[i]]--;
    if(hashing1[vect[i]]==1)som++;}
   
   if(som==som2){ans=min(ans,j-i+1);break;}}}
  cout<<ans<<endl;}
    
return 0;}