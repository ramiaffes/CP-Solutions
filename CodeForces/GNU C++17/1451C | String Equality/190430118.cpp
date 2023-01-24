#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
long long int n,q,m,l,r,k,t;
string s,p,b;
cin>>t;
while(t--){
cin>>n>>k;
cin>>s;
cin>>b;
map<char,long long int>hashing;
map<char,long long int>hashing1;
for(long long int i(0);i<n;i++){
 hashing[s[i]]++;}
for(long long int i(0);i<n;i++){
 hashing1[b[i]]++;}
bool test=true;
map<char,long long int>hashing2(hashing.begin(),hashing.end());
map<char,long long int>hashing3;
for(auto v:hashing2){
 if(hashing1[v.first]==0){
  if(hashing[v.first]%k!=0){test=false;break;}
 else{
  char var=v.first;
  while((var!='z')and(hashing1[var]==0)){
    var=var-'0'+1+'0';
   }
  if(hashing1[var]==0){
   test=false;break;}
  else{hashing3[var]+=hashing2[v.first];
   }}}
  else{
   hashing3[v.first]+=hashing2[v.first];}}
for(auto v:hashing3){
 if((hashing3[v.first]-hashing1[v.first])==0)continue;
 if((hashing3[v.first]-hashing1[v.first])%k!=0){
  test=false;break;}
 else{
  if(v.first=='z'){test=false;break;}
  char var=v.first-'0'+1+'0';
  while((var!='z')and(hashing1[var]==0)){
    var=var-'0'+1+'0';
   }
  if(hashing1[var]==0){test=false;break;}
  long long int val=(hashing3[v.first]-hashing1[v.first]);
  if(val<=0){test=false;break;}
   hashing3[v.first]=hashing1[v.first];
   hashing3[var]+=val;
  }}
 
 
if(test==false){
 cout<<"NO"<<endl;}
else{
 cout<<"YES"<<endl;}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}