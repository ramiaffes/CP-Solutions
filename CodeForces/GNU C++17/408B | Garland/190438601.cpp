#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
map<char ,long long int >hashing1;
 
int main()
{
fast;
long long int n,m;
string s;
string s1;
cin>>s;
cin>>s1;
bool test=true;
for(long long int i(0);i<s.length();i++){
 hashing[s[i]]++;}
long long int som=0;
for(long long int i(0);i<s1.length();i++){
 hashing1[s1[i]]++;}
for(auto v:hashing1){
 if(hashing[v.first]==0){test=false;break;}
 else if(hashing[v.first]<=hashing1[v.first]){
  som+=hashing[v.first];
  }
 else{
  som+=hashing1[v.first];}}
if(test==false){
 cout<<-1<<endl;}
else{
 cout<<som<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}