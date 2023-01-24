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
 cin>>n;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
vector<string>res;
for(long long int i(0);i<26;i++){
 char var=(i+97);
 string v1(1,var);
 res.push_back(v1);}
for(long long int i(0);i<26;i++){
 for(long long int j(0);j<26;j++){
  char var=(i+97);
  char var2=(j+97);
  string v1(1,var);
  string v2(1,var2);
  string res1;
  res1.append(v1);
  res1.append(v2);
  res.push_back(res1);
  }}
bool test;
string val;
for(long long int i(0);i<res.size();i++){
 test=true;
 for(long long int j(0);j<n;j++){
  if(vect[j].find(res[i])!=string::npos){
   test=false;break;}}
  if(test==true){val=res[i];break;}}
 
 cout<<val<<endl;
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}