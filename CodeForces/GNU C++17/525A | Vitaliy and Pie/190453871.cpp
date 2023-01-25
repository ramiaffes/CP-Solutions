#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
map<pair<long long int,long long int>,bool>vis;
  
  
int main()
{
 fast; 
 long long int n;
 cin>>n;
 string s;
 cin>>s;
 long long int result=0;
 map<char,long long int>res;
 for(long long int i(0);i<(2*n-2);i++){
  if(i%2==0){
   res[s[i]]++;
   }
  else{
   if(res[tolower(s[i])]==0){
    result++;}
   else{
    res[tolower(s[i])]--;
    }}}
  cout<<result<<endl;
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}