#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=50;
vector<long long int>res(M);
set<char>res1;
long long int som1=0;
long long int som2=0;
string s;
bool test=true;
void check(string s,long long int i,long long int j,long long int d){
 if(i==j){
  res1.insert(s[i]);}
 else if(i==(j-1)){
  if(s[i]!=s[j]){
  res[d]++;}return;
  }
 else {if(s[i]!=s[j]){
  res[d]++;}
 check(s,i+1,j-1,d);}}
int main()
{
 fast;
 long long int k,t,a,b,c,m,x,n;
 cin>>t;
 while(t--){
 cin>>n;
 res.resize(n);
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
for(long long int i(0);i<n;i++){
 check(vect[i],0,vect[i].length()-1,i);}
for(long long int i(0);i<n;i++){
 
 res[i]=res[i]%2;
 }
long long int som=0;
for(long long int i(0);i<n;i++){
 som+=res[i];}
if(som%2==1){
 if(res1.empty()!=true){
  cout<<n<<endl;}
 else{
  cout<<(n-1)<<endl;}
 }
else{
 cout<<n<<endl;}
res.clear();
res1.clear();
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}