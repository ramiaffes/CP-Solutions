#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int ,set<char>>ma;
map<set<char>,vector<long long int>>m;
const long long M=1000000007;
int main()
{
 fast;
 long long int t,n;
 string s;
 cin>>n;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
for(long long int i(0);i<n;i++){
 for(long long int j(0);j<vect[i].length();j++){
  ma[i].insert(vect[i][j]);}}
for(long long int i(0);i<n;i++){
 m[ma[i]].push_back(i);}
long long int som=0;
long long int ans=0;
for(auto v:m){
 if(v.first.size()==2){
 som=0;
 for(auto g:m){
  set<char>intersect;
  set_intersection(v.first.begin(),v.first.end(),g.first.begin(),g.first.end(),inserter(intersect, intersect.begin()));
  if(intersect==g.first){
   for(long long int i(0);i<g.second.size();i++){
   som+=vect[(g.second)[i]].length();}}
  }
 ans=max(ans,som);}}
long long int som1=0;
for(auto v:m){
 som=0;
 som1=0;
 if(v.first.size()==1){
  for(long long int i(0);i<v.second.size();i++){
   som+=vect[(v.second)[i]].length();}
 ans=max(ans,som);
 for(auto g:m){
  som1=som;
  if((g.first!=v.first)and(g.first.size()==1)){
   for(long long int i(0);i<g.second.size();i++){
   som1+=vect[(g.second)[i]].length();}
   
   }ans=max(ans,som1);}
 }}
cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}