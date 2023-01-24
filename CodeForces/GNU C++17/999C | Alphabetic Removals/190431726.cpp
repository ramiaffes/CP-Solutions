#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
map<long long int,bool>vis;
map<long long int,bool>vis1;
int main()
{
fast;
long long int n,k;
string s;
cin>>n>>k;
cin>>s;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
char val;
for(auto v:hashing){
 k-=v.second;
 if(k<0){
  val=v.first;
  break;}
 else{
  s.erase(remove(s.begin(), s.end(), v.first), s.end());
  if(k==0)break;}}
if(k<0){
 k+=hashing[val];}
string s1;
long long int som=0;
for(long long int i(0);i<s.length();i++){
 if(s[i]==val){
  som++;
  if(som<=k){
   continue;}
  else{
   string var(1,val);
   s1.append(var);}}
 else{
  string var(1,s[i]);
  s1.append(var);
  }}
cout<<s1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}