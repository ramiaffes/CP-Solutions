#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>dp;
long long int som=0;
int main() 
{
 fast;
 
 ifstream I("input.txt");
  ofstream O("output.txt");
 string s;
 long long int n;
I>>n>>s;
 vector<long long int>res;
 set<long long int>res3;
 long long int som=1;
 for(long long int i(1);i<(n);i++){
  if(s[i]==s[i-1]){
   som++;}
  else{
   res.push_back(som);
   som=1;}}
 res.push_back(som);
 auto ip = unique(s.begin(),s.end());
 s.resize(distance(s.begin(), ip));
 for(long long int i(1);i<(s.length()-1);i++){
  if((s[i-1]=='1')and(s[i+1]=='1')){
   res3.insert(res[i]);}
  }
 for(long long int i(0);i<(s.length());i++){
  if((s[i]=='1')and(res[i]>=2)){
   res3.insert(0);}
  }
 if(res3.size()==1){
  O<<"YES"<<endl;
  }
 else{
  O<<"NO"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}