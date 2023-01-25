#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 string s1,s2;
 cin>>s1>>s2;
 set<string>se1;
 set<string>se2;
 vector<string>v(100000);
  for(long long int i(1);i<=s2.length();i++){
   bool test=true;
   if(s2.length()%i==0){
    string val=s2.substr(0,i);
    for(long long int j(0);j<s2.length();j+=i){
     if(s2.substr(j,i)!=val){
      test=false;break;}
     }
    if(test==true)se2.insert(val);}}
 for(long long int i(1);i<=s1.length();i++){
   bool test=true;
   if(s1.length()%i==0){
    string val=s1.substr(0,i);
    for(long long int j(0);j<s1.length();j+=i){
     if(s1.substr(j,i)!=val){
      test=false;break;}
     }
    if(test==true)se1.insert(val);}}
 auto it=set_intersection(se1.begin(),se1.end(),se2.begin(),se2.end(),v.begin());
 v.resize(it-v.begin());
 cout<<v.size()<<endl;
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}