#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,set<long long int>>adj;
map<long long int,bool>vis;
vector<pair<long long int,long long int>>vect(N);
long long int som1=2*1e9;
long long int som2=0;
long long int val3=0;
 
int main()
{
 fast; 
 long long int n,x,m,t,l,k,r;
 string s;
 cin>>n;
 vector<long long int>res;
 vector<long long int>res1;
 for(long long int i(1);i*i<=n;i++){
  if(n%i==0){
   
  res.push_back(n/i);
  res1.push_back(i);}}
 reverse(res1.begin(),res1.end());
 bool test=true;
 long long int val=0;
 for(auto v:res){
  test=true;
  for(long long int j(2);j*j<=v;j++){
   if(v%j==0){
    if((v%(j*j)==0)or(v%((v/j)*(v/j))==0)){
     test=false;break;}}
   }
   if(test==true){val=v;break;}}
 if(test!=true){
  for(auto v:res1){
  test=true;
  for(long long int j(2);j*j<=v;j++){
   if(v%j==0){
    if((v%(j*j)==0)or(v%((v/j)*(v/j))==0)){
     test=false;break;}}
   }
   if(test==true){val=v;break;}}}
 cout<<val<<endl;
 
 
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}