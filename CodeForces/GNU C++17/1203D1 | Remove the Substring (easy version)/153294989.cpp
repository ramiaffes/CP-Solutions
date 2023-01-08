#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 string s;
 string t;
 cin>>s;
 cin>>t;
 long long int ans=0;
 for(long long int i(0);i<s.length();i++){
  for(long long int j(i);j<s.length();j++){
   long long int val=0;
   long long int r=0;
   while(r<i){
    if(s[r]==t[val]){
     val++;}
    if(val==t.length())break;
    r++;}
  if(val!=t.length()){
   long long int r=j+1;
   while(r<s.length()){
    if(s[r]==t[val]){
     val++;}
    if(val==t.length())break;
    r++;
    }
   }
  if(val==t.length()){
   ans=max(ans,j-i+1);}
   }}
 cout<<ans<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}