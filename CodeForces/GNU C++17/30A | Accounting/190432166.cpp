#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<string,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 long long int a,b,n;
 string s;
 string t;
 cin>>a>>b>>n;
 if(a==0){
  if(b==a){
   cout<<1<<endl;}
 else{
  cout<<"No solution"<<endl;}}
else{
 if(b%a!=0){
  cout<<"No solution"<<endl;
  }
 else{
  bool test=false;
  long long int p=1;
  for(long long int i(-abs(b/a));i<=(abs(b/a));i++){
   p=1;
  for(long long int j(0);j<n;j++){
   p*=i;}
  if(p==b/a){
   cout<<i<<endl;test=true;break;}}if(test==false)cout<<"No solution"<<endl;}
 
 }
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}