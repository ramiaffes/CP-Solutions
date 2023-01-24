#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<string,vector<string>>dp;
bool verify(string s1,string s2){
 if((s1==s2)or (find(dp[s1].begin(),dp[s1].end(),s2)!=dp[s1].end())){return true;}
 else if((s1.length()%2==1)or(s2.length()%2==1)){
  return(s1==s2);}
 else{
  string str1=s1.substr(0,s1.length()/2);
  string str2=s1.substr(s1.length()/2,s1.length()/2);
  string str4=s2.substr(s2.length()/2,s2.length()/2);
  string str3=s2.substr(0,s2.length()/2);
  bool var=((verify(str1,str3)and(verify(str2,str4)))or(verify(str1,str4)and(verify(str2,str3))));
  if(var==true){dp[s1].push_back(s2);dp[s2].push_back(s1);}
  return var;}}
int main()
{
 fast;
string s1,s2;
cin>>s1;
cin>>s2;
if(verify(s1,s2))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}