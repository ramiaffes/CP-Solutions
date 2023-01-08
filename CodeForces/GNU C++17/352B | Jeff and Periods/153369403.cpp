#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,a,b,c;
 cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++)cin>>vect[i];
map<long long int,set<long long int>>res;
map<long long int,long long int>val;
for(long long int i(0);i<n;i++){
 if(res[vect[i]].size()<=1){
 if(val[vect[i]]!=0){
 res[vect[i]].insert(i+1-val[vect[i]]);}}
 val[vect[i]]=i+1;}
vector<pair<long long int,long long int>>res3;
sort(vect.begin(),vect.end());
auto it =unique(vect.begin(),vect.end());
vect.resize( distance(vect.begin(),it) );
for(auto v:vect){
 if(res[v].size()==0){
  res3.push_back(make_pair(v,0));}
 else if(res[v].size()==1){
  for(auto v1:res[v]){
  res3.push_back(make_pair(v,v1));}}}
cout<<res3.size()<<endl;
for(auto v:res3){
 cout<<v.first<<" "<<v.second<<endl;}
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}