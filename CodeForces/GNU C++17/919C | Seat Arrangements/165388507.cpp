#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,k,m;
 cin>>n>>m>>k;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 map<char,long long int>hashing;
 long long int som=0;
 for(long long int i(0);i<n;i++){
  if(k>m)break;
  hashing.clear();
  for(long long int j(0);j<k;j++){
   hashing[vect[i][j]]++;}
  long long int val=0;
  long long int val1=k-1;
  while(val1<m){
   if(hashing['*']==0)som++;
   hashing[vect[i][val]]--;
   val++;
   val1++;
   if(val1<m){
   hashing[vect[i][val1]]++;}}}
 for(long long int i(0);i<m;i++){
  if(k>n)break;
  hashing.clear();
  for(long long int j(0);j<k;j++){
   hashing[vect[j][i]]++;}
  long long int val=0;
  long long int val1=k-1;
  while(val1<n){
   if(hashing['*']==0)som++;
   hashing[vect[val][i]]--;
   val++;
   val1++;
   if(val1<n){
   hashing[vect[val1][i]]++;}}}
 if(k==1)som/=2;
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}