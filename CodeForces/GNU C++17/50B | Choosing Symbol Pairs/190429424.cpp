#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<long long int,long long int>dp;
const long long M=1000000007;
int main()
{
 fast;
 long long int n,k;
 string s;
 cin>>s;
 map<char,long long int>hashing;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
long long int som=0;
for(auto v:hashing){
 som+=(v.second*v.second);}
cout<<som<<endl;
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}