#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,k,t;
 cin>>t;
 while(t--){
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 unordered_map<int, int> m;
 vector<long long int>result(vect.begin(),vect.end());
 sort(result.begin(),result.end());
 long long int j=1;
 for(long long int i(0);i<n;i++){
  m[result[i]]=j;
  j++;}
 long long int som=1;
 for(long long int i(0);i<(n-1);i++){
  if(m[vect[i]]!=(m[vect[i+1]]-1)){
   som++;
   }}
 if(som<=k){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
 
 
}
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}