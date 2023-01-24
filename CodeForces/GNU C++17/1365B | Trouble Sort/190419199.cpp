#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<string,set<char>>dp;
bool test=false;
int main()
{
 fast;
 long long int n,t;
 cin>>t;
 while(t--){
   cin>>n;
   map<long long int,bool>vis;
   vector<long long int>vect(n);
    vector<long long int>vect1(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];
    vis[vect1[i]]=1;}
   if((vis[1]==1)and(vis[0]==1)){
    cout<<"YES"<<endl;}
  else {
   if(is_sorted(vect.begin(),vect.end())){
    cout<<"YES"<<endl;}
   else{
    cout<<"NO"<<endl;}
   }
  
  }
   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}