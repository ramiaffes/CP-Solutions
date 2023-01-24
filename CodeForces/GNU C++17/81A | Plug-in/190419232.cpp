#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 string s;
 cin>>s;
 vector<char>res;
 for(long long int i(0);i<s.length();i++){
  if(res.empty())res.push_back(s[i]);
  else{
   if(res[res.size()-1]==s[i]){
    res.pop_back();}
   else{
    res.push_back(s[i]);}}}
 for(auto v:res)cout<<v;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}
 
 
 
 
 
 
 
 
 
 
 
 
 