#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,b;
 cin>>t;
 while(t--){
  cin>>n; string s,s1;
  vector<long long int>vect2(n);
  for(long long int i(0);i<n;i++)cin>>vect2[i];
  for(long long int i(0);i<n;i++){
   cin>>b;
   cin>>s1;
   for(long long int d1(b-1);d1>=0;d1--){
    if(s1[d1]=='U'){
     if(vect2[i]==0)vect2[i]=9;
     else vect2[i]--;
     }
    else{
     if(vect2[i]==9)vect2[i]=0;
     else vect2[i]++;}}
   }
  for(long long int i(0);i<(n-1);i++)cout<<vect2[i]<<" ";
  cout<<vect2[n-1]<<endl;}
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}