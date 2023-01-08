#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,m;
 cin>>s;
 map<char,long long int>hashing;
 hashing.clear();
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
 bool test=true;
 if(hashing.size()==1){
  cout<<"NO"<<endl;}
 else if(hashing.size()==2){
  for(auto v:hashing){
   if(hashing[v.first]==1){test=false;break;}}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;}
 else if(hashing.size()==3){
  test=false;
  for(auto v:hashing){
   if(hashing[v.first]>1){test=true;break;}}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  
 else if(hashing.size()==4){
  cout<<"YES"<<endl;}
 else cout<<"NO"<<endl;
 
    
    
 
    
    
 
    
    
return 0;} 