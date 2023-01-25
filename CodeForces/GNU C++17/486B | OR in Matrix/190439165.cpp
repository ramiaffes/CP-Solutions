#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
long long int som=0;
long long int som1=0;
map<pair<long long int ,long long int>,long long int>hashing;
 
int main()
{
 fast;
 long long int n,m;
 cin>>m>>n;
 vector<long long int>vect1(n);
 vector<vector<long long  int>>vect(m,vect1);
 for(long long int i(0);i<m;i++){
  for(long long int j(0);j<n;j++){
   cin>>vect[i][j];}}
  
  for(long long int i(0);i<m;i++){
  for(long long int j(0);j<n;j++){
   if(vect[i][j]==0){
    for(long long int k(1);k<=n;k++){
   hashing[make_pair(i+1,k)]=-1;
   }for(long long int d(1);d<=m;d++){
    hashing[make_pair(d,j+1)]=-1;
    }
    }
    }}
   bool test=true;
   for(long long int i(0);i<m;i++){
  for(long long int j(0);j<n;j++){
   if(vect[i][j]==1){
    test=false;
     for(long long int k(1);k<=n;k++){
   if(hashing[make_pair(i+1,k)]!=-1){
    test=true;break;}}
   if(test==true)continue;
   for(long long int d(1);d<=m;d++){
    if(hashing[make_pair(d,j+1)]!=-1){test=true;break;}
    }
   
   }if(test==false)break;}if(test==false)break;}
  if(test==false)cout<<"NO"<<endl;
  else {cout<<"YES"<<endl;vector<long long int>vect1(n);
 vector<vector<long long  int>>res(m,vect1);
 for(long long int i(0);i<m;i++){
  for(long long int j(0);j<n;j++){
   res[i][j]=hashing[make_pair(i+1,j+1)]+1;}}
  for(long long int i(0);i<m;i++){
  for(long long int j(0);j<n;j++){
   cout<<res[i][j]<<" ";}
   cout<<endl;}}
 
return 0;}