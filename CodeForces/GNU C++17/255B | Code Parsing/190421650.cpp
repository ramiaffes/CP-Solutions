#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 
 
int main()
{
 fast; 
 long long int n,k;
 string s,s2;
 cin>>s;
 map<char,long long int>hashing;
 for(long long int i(0);i<s.length();i++){
  hashing[s[i]]++;}
 if(hashing['x']>hashing['y']){
  string s23(hashing['x']-hashing['y'],'x');
  cout<<s23<<endl;}
  else{
   string s23(hashing['y']-hashing['x'],'y');
  cout<<s23<<endl;}
 
 
 
 
 
 
 
return 0;}