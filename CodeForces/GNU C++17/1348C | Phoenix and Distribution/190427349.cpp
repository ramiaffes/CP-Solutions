#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int n,t,k;
 cin>>t;
 while(t--){
 cin>>n>>k;
 string s;
 cin>>s;
 map<char,long long int>hashing;
 for(long long int i(0);i<n;i++){
  hashing[s[i]]++;}
 long long int r1=0;
 while(hashing[r1+97]==0){r1++;}
 
 
 if(hashing[r1+97]<k){
  long long int i=0;
  long long int som=0;
  while(som<k){
   som+=hashing[i+97];
   i++;}
  char var11=(i-1+97);
  cout<<var11<<endl;}
 else{
  string var7(1,r1+97);
  hashing[r1+97]-=k;
  for(long long int i(0);i<26;i++){
   if(hashing[i+97]==0)hashing.erase(i+97);}
  if((hashing.size()>=2)){
  for(long long int i(0);i<26;i++){
    char var5=i+97;
    while(hashing[var5]!=0){
     string var6(1,var5);
     var7.append(var6);
     hashing[var5]--;}}}
  else{
   long long int r3=25;
   while((r3>=0)and(hashing[r3+97]==0)){r3--;}
  string var10(hashing[r3+97]/k+(hashing[r3+97]%k!=0),r3+97);
  var7.append(var10);}
  cout<<var7<<endl;
  }
 
 
}
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}