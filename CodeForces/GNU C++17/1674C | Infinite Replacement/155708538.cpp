#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
long long int power(long long int m,long long int d){
 long long int p=1;
 for(long long int i(0);i<d;i++){
  p*=m;}
 return p;}
int main()
{
 fast;
 long long int q;
 cin>>q;
 string t,s;
 while(q--){
  cin>>s;
  cin>>t;
  if(t=="a"){
   cout<<1<<endl;}
  else if(t.find("a")!=string::npos){
   cout<<-1<<endl;}
 else{
  cout<<(power(2,s.length()))<<endl;}}
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}  