#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t;
 long long int n,c;
 cin>>t;
 
 for( int d(1);d<=t;d++){
  string s;
  cin>>s;
  long long int n1=0;
  long long int n2=0;
  long long int i=0;
  while('a'==s[i]){
   n1++;
   i++;}
  if(n1==s.length()){
   cout<<"NO"<<endl;}
  else{
   cout<<"YES"<<endl;
  long long int j=s.length()-1;
  while('a'==s[j]){
   n2++;
   j--;}
  if(n1>n2){
   s.insert(s.begin(),'a');}
  else{s.insert(s.end(),'a');}
  cout<<s<<endl;}
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}