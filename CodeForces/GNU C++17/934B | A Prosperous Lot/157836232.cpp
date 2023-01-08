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
 long long int k;
 cin>>k;
 string res;
 for(long long int i(0);i<(k/2);i++){
  res.append("8");}
 if(k%2==1){
  res.append("4");}
 if(res.size()<19){
  cout<<res<<endl;}
 else if(res.size()==19){
  string res1('1',1);
  for(long long int i(0);i<18;i++){
   res1.append("0");}
  if(res==res1){
  cout<<res<<endl;}
  else cout<<-1<<endl;}
 else{
  cout<<-1<<endl;}
 
 
    
    
 
    
    
 
    
    
return 0;} 