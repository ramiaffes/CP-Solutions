#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
long long int som=0;
map<pair<char,char>,long long int>val;
map<char,long long int>dist1;
map<char,long long int>dist2;
 
int main()
{
 fast; 
 long long int n,k,t;
 string s1,s2;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  map<long long int,long long int>hashing;
  long long int som=0;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  for(long long int i(0);i<n;i++){
   long long int som1=0;
   long long int p=1;
   while(p<vect[i]){
    p*=2;som1++;}
   if(p>vect[i]){p/=2;som1--;}
   hashing[som1]++;}
  for(auto v:hashing){
   som+=(v.second-1)*v.second/2;}
  cout<<som<<endl;
  }
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}