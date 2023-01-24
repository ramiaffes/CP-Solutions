#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; map<pair<long long int,long long int>,vector<pair<long long int,long long int>>>adj;
long long int power(long long int n,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=n;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 string s1;
 string s2;
 while(t--){
  cin>>n;
  cin>>s1;
  cin>>s2;
  bool test=true;
  for(int i=0;i<n;i++){
   if((s1[i]=='R')and(s2[i]!='R')){
    test=false;break;}
   if((s2[i]=='R')and(s1[i]!='R')){
    test=false;break;}
   }
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;}
  
 
 
 
 
 
    
    
return 0;}
 