#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
int main()
{
 fast; 
 long long int t,n,k,a,b;
 string s,s1;
 cin>>t;
 while(t--){
  cin>>n;vector<long long int>v1;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  for(long long int i(0);i<n;i++){
   if(vect[i]<(i+1)){
    v1.push_back(i+1);}}
  long long int som2=0;
  for(long long int i(0);i<v1.size();i++){
   auto it=lower_bound(v1.begin(),v1.end(),vect[v1[i]-1]);
   som2+=((it-v1.begin()));
   }
  cout<<som2<<endl;
  
 
 }
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}