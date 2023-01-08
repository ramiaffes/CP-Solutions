#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int a,k;
 string s;
 cin>>s;
long long int som=1;
vector<long long int>res;
 for(long long int i(1);i<(s.length());i++){
  if(s[i]==s[i-1]){
   som++;}
  else{
   res.push_back(som);
   som=1;}}
 res.push_back(som);
 auto ip = unique(s.begin(),s.end());
 s.resize(distance(s.begin(), ip));
 for(long long int i(0);i<s.length();i++){
  if(res[i]>2){
   res[i]=2;}
  if((i>=1)){
   if(((res[i]==2))and(res[i-1]==2)){
    res[i]=1;}}}
 string str;
 for(long long int i(0);i<s.length();i++){
  string s2(res[i],s[i]);
  str.append(s2);}
cout<<str<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}