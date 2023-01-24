#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,b,a,c,t;
    cin>>t;
    while(t--){
  cin>>n;
  vector<long long int>vect(n);
  bool test=false;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  vector<long long int>res;
  for(long long int i(0);i<(n-1);i++){
   if(test==false){
   if((vect[i]==0)and(vect[i+1]==1)){
    test=true;
    res.push_back(i+1);
    res.push_back(n+1);
    }
   else{
    res.push_back(i+1);}}
   else{
    res.push_back(i+1);}}
   res.push_back(n);
  if(test==false){
   res.clear();
   if(vect[0]==1){
    res.push_back(n+1);
    for(long long int i(0);i<n;i++){
     res.push_back(i+1);}test=true;}
   else if(vect[n-1]==0){
    for(long long int i(0);i<n;i++){
     res.push_back(i+1);}
    res.push_back(n+1);test=true;
     }}
  if(test==true){
   for(auto v:res)cout<<v<<" ";
   cout<<endl;
   }
  else {
   cout<<-1<<endl;}
  
  }
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}