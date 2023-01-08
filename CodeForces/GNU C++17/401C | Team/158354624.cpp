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
 long long int n,m;
 string s;
 cin>>n>>m;
  string res;
  if(n>(m+1)){
   cout<<-1<<endl;}
  else{
  if(n==(m+1)){
   for(long long int j(0);j<n;j++){
    res.append("0");
    res.append("1");}
   res.pop_back();
   cout<<res<<endl;
   }
  else{
  vector<long long int>vect(n+1);
  long long int som=0;
  bool test=false;
  while(som<m){
   test=false;
  for(long long int i(0);i<(n+1);i++){
   if(vect[i]<2){vect[i]++;som++;test=true;if(som==m)break;}
  }
  if(test==false)break;
  }
  if(som<m){
   cout<<-1<<endl;}
  else{
 for(long long int i(0);i<(n);i++){
  for(long long int j(0);j<vect[i];j++){
   res.append("1");}
   res.append("0");}
 for(long long int j(0);j<vect[n];j++){
   res.append("1");}
 cout<<res<<endl;
  }}
  
 }
 
 
 
    
    
return 0;}