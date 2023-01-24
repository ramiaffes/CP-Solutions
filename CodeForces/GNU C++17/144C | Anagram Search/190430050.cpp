#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;vector<string> out;
map<long long int,bool>vis;
int main()
{
 fast;
string s,t;
long long int n,k;
cin>>s;
cin>>t;
map<char,long long int>hashing;
map<char,long long int>hashing1;
map<char,long long int>hashing2;
long long int res=0;
if(s.length()<t.length()){
 cout<<0<<endl;}
else{
long long int res=0;
for(long long int i(0);i<t.length();i++){
 hashing[t[i]]++;}
for(long long int i(0);i<t.length();i++){
 hashing1[s[i]]++;}
long long int var=0;
long long int som=0;
map<char,long long int>hashing2;
map<char,long long int>hashing3;
for(long long int i(0);i<=(s.length()-t.length());i++){
 som=0;
 hashing2=hashing;
 hashing3=hashing1;
 for(auto v:hashing2){
  var=min(hashing3[v.first],hashing2[v.first]);
  hashing3[v.first]-=var;
  hashing2[v.first]-=var;}
 for(auto v:hashing2){
  som+=hashing2[v.first];}
 if(som==hashing3['?'])res++;
 hashing1[s[i]]--;
 if((i+t.length())<s.length()){
 hashing1[s[i+t.length()]]++;}
 }
cout<<res<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}