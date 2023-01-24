#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing;
map<long long int,long long int>hashing1;
bool test=true;
 
 
int main()
{
 fast;
long long int n,t;
string s;
 cin>>s;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
vector<char>res;
for(auto v:hashing){
 if(hashing[v.first]%2==1)res.push_back(v.first);}
long long int i=0;
long long int j=res.size()-1;
string res1(s.length(),' ');
if(res.size()>1){
while(i<j){
 hashing[res[i]]++;
 hashing[res[j]]--;
 i++;
 j--;}}
i=0;
j=s.length()-1;
for(auto v:hashing){
 while((i<j)and(hashing[v.first]>1)){
  res1[i]=v.first;
  res1[j]=v.first;
  i++;
  j--;
  hashing[v.first]-=2;}}
char val=' ';
for(auto v:hashing){
 if(v.second==1){val=v.first;break;}}
if(res1.length()%2==1){
 res1[res1.length()/2]=val;}
cout<<res1<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}