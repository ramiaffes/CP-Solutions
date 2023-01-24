#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int ,long long int >hashing;
int main()
{
fast;
long long int n,t;
cin>>t;
while(t--){
string s;
string val;
 cin>>n;
 cin>>s;
 bool test=false;
 for(long long int i(0);i<26;i++){
  char var=(char)(i+97);
  string ch(1,var);
  if(s.find(ch)==string::npos){
   test=true;val=ch;break;}}
 if(test==false){
 for(long long int j(0);j<26;j++){
  char var1=(char)(j+97);
  string ch2(1,var1);
  for(long long int i(0);i<26;i++){
  string ch1=ch2;
  char var=(char)(i+97);
  string ch(1,var);
  ch1.append(ch);
  if(s.find(ch1)==string::npos){
   test=true;val=ch1;break;}
  }
  if(test==true)break;
 }}
if(test==false){
 for(long long int j(0);j<26;j++){
  char var1=(char)(j+97);
  string ch2(1,var1);
  for(long long int i(0);i<26;i++){
  string ch1=ch2;
  char var=(char)(i+97);
  string ch(1,var);
  ch1.append(ch);
  for(long long int d(0);d<26;d++){
  string ch4=ch1;
  char var2=(char)(d+97);
  string ch3(1,var2);
  ch4.append(ch3);
  if(s.find(ch4)==string::npos){
   test=true;val=ch4;break;}
  }
  if(test==true)break;
 }
 if(test==true)break;}}
cout<<val<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}