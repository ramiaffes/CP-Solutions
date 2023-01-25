#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
 
int main() {
 fast;
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
  string s1(n,'0');
  string s2(n,'0');
  s1[0]='1';
  s2[0]='1';
  long long int i=1;
  while(((s[i]=='0') or(s[i]=='2'))and(i<n)){
   if(s[i]=='0'){
   s1[i]='0';
   s2[i]='0';}
   else{
    s1[i]='1';
   s2[i]='1';}
   i++;
   }
  if(i<n){
   s1[i]='1';
   s2[i]='0';
   }
 
  for(long long int j(i+1);j<n;j++){
   if(s[j]=='2'){
    s1[j]='0';
    s2[j]='2';
   }
   else if(s[j]=='1'){
    s1[j]='0';
    s2[j]='1';}
   else{
    s1[j]='0';
    s2[j]='0';}
   }
   cout<<s1<<endl;
   cout<<s2<<endl;
  
  
  
  
  
  
 }
  
  
 
   
   
  
    return 0;
}