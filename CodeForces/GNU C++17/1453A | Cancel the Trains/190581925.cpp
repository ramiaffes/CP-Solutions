#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 
  long long int t,n,m,som;
  string s;
  cin>>t;
  while(t--){ 
   som=0;
   cin>>n>>m;
   vector<long long int>vect(n+m);
   for(long long int i(0);i<(n+m);i++){
    cin>>vect[i];}
   sort(vect.begin(),vect.end());
   for (long long int i(0);i<(n+m);i++){
    if(vect[i+1]==vect[i]){
     som++;}}
   cout<<som<<endl;
   
   
  
   
   
   
   
   
   
    
     
     
     
     
     }
  
  
  return 0;}