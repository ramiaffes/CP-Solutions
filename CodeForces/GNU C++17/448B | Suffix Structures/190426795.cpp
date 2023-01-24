#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<char,long long int>hashing1;
map<char,long long int>hashing2;
int main()
{
 fast;
string s,t;
long long int n;
cin>>s;
cin>>t;
bool test=true;
bool test1=false;
for(long long int i(0);i<s.length();i++){
 hashing1[s[i]]++;}
for(long long int i(0);i<t.length();i++){
 hashing2[t[i]]++;}
for(long long int i(0);i<26;i++){
 char var=(97+i);
 if(hashing1[var]<hashing2[var]){
  test=false;break;}
 if(hashing2[var]<hashing1[var]){
  test1=true;}
 }
if(test==false){
 cout<<"need tree"<<endl;}
else  if(test1==true){
 long long int i=0;
 long long int j=0;
 while(i<t.length()){
  while((j<s.length())and(s[j]!=t[i])){
   j++;}
  if(j==s.length())break;
  else{
   j++;
   }
  i++;}
 if(i==t.length()){
  cout<<"automaton"<<endl;}
 else{
  cout<<"both"<<endl;}}
else{
 cout<<"array"<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}