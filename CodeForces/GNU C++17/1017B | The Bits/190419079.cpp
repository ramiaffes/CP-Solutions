#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string,set<char>>dp;
bool test=false;
int main()
{
 fast;
 long long int n;
 string a,b;
 cin>>n;
 cin>>a;
 cin>>b;
 map<char,long long int>hashing1;
 map<char,long long int>hashing;
  for(long long int i(0);i<n;i++){
   hashing[a[i]]++;}
 for(long long int i(0);i<n;i++){
  if(b[i]=='0'){
   hashing1[a[i]]++;}}
 cout<<(hashing1['1']*hashing['0']+hashing['1']*hashing1['0']-hashing1['0']*hashing1['1'])<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}