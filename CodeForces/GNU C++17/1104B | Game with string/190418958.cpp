#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
 fast; 
 long long int t,n;
string s;
 cin>>s;
 long long int i=0;
 int test=0;
 vector<char>res;
 while(i<(s.length()-1)){
  if(s[i]==s[i+1]){
   test=1-test;
   i++;}
  else{
   if(res.empty()){res.push_back(s[i]);}
   else if(res[res.size()-1]==s[i]){
    test=1-test;
    res.erase(res.begin()+res.size()-1);}
   else{
   res.push_back(s[i]);
   
   }}
   i++;}
  if(res.size()>=1){
   if(res[res.size()-1]==s[s.length()-1]){test=1-test;}}
 if(test==0)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}