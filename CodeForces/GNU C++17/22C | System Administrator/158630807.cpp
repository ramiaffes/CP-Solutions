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
 long long int n,m,v;
 cin>>n>>m>>v;
 if(m<(n-1)){
  cout<<-1<<endl;}
 else{
  long long int v1=0;
  long long int v2=0;
  if((v>1)and(v<n)){
   v1=v-1;
   v2=v+1;}
  if(v==1){
   v1=v+1;
   v2=v+2;}
  if(v==n){
   v1=v-1;
   v2=v-2;}vector<pair<long long int,long long int>>res1;
   res1.push_back(make_pair(v1,v));
   res1.push_back(make_pair(v2,v));
  long long int som=0;
  long long int d1=1;
  while(som<(m-2)){
   if((d1==v1)or(d1==v2)or(d1==v)){d1++;if(d1>n)break;continue;}
   res1.push_back(make_pair(v,d1));
   som++;
   d1++;
   if(d1>n)break;}
  vector<long long int >res;
  for(long long int i(1);i<=n;i++){
   if((i!=v2)and(i!=v)){
    res.push_back(i);
    }
   
   }
  if(som!=(m-2)){
  for(long long int i(0);i<(res.size()-1);i++){
   for(long long int j(i+1);j<res.size();j++){
    res1.push_back(make_pair(res[i],res[j]));
    som++;
    if(som==(m-2))break;}if(som==(m-2))break;}}
  if(som!=(m-2)){
   cout<<-1<<endl;}
  else{
   for(auto v:res1){
    cout<<v.first<<" "<<v.second<<endl;}}
   
  }
  
  
 
 
 
 
 
    
    
return 0;}