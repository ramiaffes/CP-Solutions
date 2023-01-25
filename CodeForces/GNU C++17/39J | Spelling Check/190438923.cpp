#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,long long int>hashing;
map<char,long long int>hashing1;
int main()
{
 fast;
 string s; 
 string t;
 cin>>s;
 cin>>t;
 long long int i=0;
 vector<long long int>res;
 bool test=false;
 long long int index=0;
 while((i<t.length())){
  if(s[i]!=t[i]){index=i;test=true;break;}i++;}
 if(test==true){
  long long int i=index;
  while((s[i]==s[index])and(i<s.length())){
   res.push_back(i+1);
   i++;}
  long long int j=index-1;
  while((s[j]==s[index])and(j>=0)){
   res.push_back(j+1);
   j--;}
  sort(res.begin(),res.end());
  s.erase(index,1);
  if(s==t){
   cout<<res.size()<<endl;
   for(long long int i(0);i<res.size();i++){cout<<res[i]<<" ";}
   }
  else{
   cout<<0<<endl;}
  }
 else{
  long long int i=s.length()-1;
  while((s[i]==s[s.length()-1])and(i>=0)){
   res.push_back(i+1);
   i--;}
   reverse(res.begin(),res.end());
  cout<<res.size()<<endl;
   for(long long int i(0);i<res.size();i++){cout<<res[i]<<" ";}
 }
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}