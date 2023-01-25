#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t;
 cin>>t;
 while(t--){
  long long int n;
  cin>>n;
  vector< long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   }
  sort(vect.begin(),vect.end());
  vector<long long int>result;
  result.push_back(vect[0]);
  for(long long int i(0);i<(n-1);i++){
   if(vect[i]!=vect[i+1]){
    result.push_back(vect[i+1]);
    }
   }
  for(long long int i(0);i<(n-1);i++){
   if(vect[i]==vect[i+1]){
    result.push_back(vect[i]);
    }
   }
  for(long long int i(0);i<n;i++){
   cout<<result[i]<<endl;}
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}