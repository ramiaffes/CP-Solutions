#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 string s;
 cin>>s;
 bool test=true;
 if(s.length()<26){
  cout<<-1<<endl;}
 else{
 for(long long int i(0);i<=(s.length()-26);i++){
  map<char,bool>vis;
  string str1=s.substr(i,26);
  test=true;
  for(long long int j(0);j<str1.length();j++){
   if(vis[str1[j]]==1){test=false;break;}
   if(str1[j]!='?'){vis[str1[j]]=1;}}
 if(test==true){
  long long int val=0;
  for(long long int d(i);d<(i+26);d++){
   if(s[d]=='?'){
    while(vis[val+65]==1){
     val++;}
    s[d]=val+65;
    val++;}
   }break;}}
if(test==false){
 cout<<-1<<endl;}
else{
 for(long long int i(0);i<s.length();i++){
  if(s[i]=='?'){s[i]='Z';}}
 cout<<s<<endl;}
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}