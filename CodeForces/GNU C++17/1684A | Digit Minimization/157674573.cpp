#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}return p;}
set<pair<long long int,long long int>>res;
bool test=false;
 
int main()
{
 fast; 
 string s;
 long long int n,k,t;
    cin>>t;
    while(t--){
  string n1;
  cin>>n1;
  long long int ans=1e9;
  if(n1.length()==1)cout<<n1<<endl;
  else{
   long long int val1=0;
  if(n1.length()==2)val1++;
  for(long long int i(val1);i<n1.length();i++){
   long long int val=n1[i]-'0';
   ans=min(ans,val);}
  cout<<ans<<endl;
  }}
  
 
    
    
 
    
    
 
    
    
return 0;} 