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
bool test=false;
string se(1,' ');
vector<string>res1;
vector<string>res2;
for(long long int i(0);i<s.length();i++){
 if((s[i]==',')or(s[i]==';')){
  if(se!=" ")se.erase(0,1);
  if((test==true)or((se[0]=='0')and(se.length()>=2))or(se==" ")){
  res1.push_back(se); }
  else{
   res2.push_back(se);}
  se=" ";
  test=false;}
 else{
 if(!(isdigit(s[i]))){
  test=true;
  }
 string s2(1,s[i]);
 se.append(s2);}
 } if(se!=" ")se.erase(0,1);
if((test==true)or((se[0]=='0')and(se.length()>=2))or(se==" ")){res1.push_back(se);}
else if((test==false)){res2.push_back(se);}
if(res2.size()==0){
 cout<<"-"<<endl;}
else{
cout<<'"';
for(long long int i(0);i<(res2.size()-1);i++){
 cout<<res2[i]<<",";}
cout<<res2[res2.size()-1]<<'"'<<endl;}
if(res1.size()==0){
 cout<<"-"<<endl;}
else{
cout<<'"'; 
for(long long int i(0);i<(res1.size()-1);i++){
 if(res1[i]!=" "){
 cout<<res1[i];}
 cout<<",";}
 
if(res1[res1.size()-1]!=" "){
cout<<res1[res1.size()-1];}cout<<'"'<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}