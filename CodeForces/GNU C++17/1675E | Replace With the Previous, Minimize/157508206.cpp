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
 long long int n,k,t;
    cin>>t;
    while(t--){
  cin>>n>>k;
  cin>>s;
  map<char,bool>vis;
  long long int som=0;
  map<char,char>parent;
  for(long long int i(0);i<26;i++){
   parent[i+97]=i+97;}
  for(long long int i(0);i<n;i++){
   if(vis[s[i]]==1){
    char var33=s[i];
    while((vis[var33]==1)and(var33>='a')){
     if(parent[var33]==var33){var33--;break;}
     var33--;}
    s[i]=var33+1;continue;}
   char var=s[i];
   while((vis[var]==0)and(var>'a')){
    var--;}
   som+=(s[i]-var);
   if(som>k){
    som-=(s[i]-var);
    while(((som+(s[i]-var))>k)and(s[i]>=var)){
     var++;}
    if(s[i]<var)var=s[i];
    som+=(s[i]-var);
    }
   char var11=s[i];
   if(vis[var]==1){
   while((vis[var]==1)and(var>='a')){
    if(parent[var]==var){var--;break;}
     var--;}s[i]=var+1;}
   else{s[i]=var;}
   for(auto v=var;v<=(var11);v++){
     vis[v]=1;
     parent[v]=var;
     }
   
   
 }
 cout<<s<<endl;
  
 
  
  }
    
return 0;} 