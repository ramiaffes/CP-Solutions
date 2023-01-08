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
 string s;
 while(t--){
  cin>>n;
  if(n==3){
   cout<<2<<" "<<1<<" "<<3<<endl;}
  else if(n==4){
   cout<<2<<" "<<1<<" "<<3<<" "<<0<<endl;}
  else{
  vector<long long int>res(n);
  long long int val=0;
  for(long long int i(0);i<n;i+=2){
   if((i+1)<n){
   res[i]=2*val;
   res[i+1]=2*val+1;
   val++;}}long long int val33=0;
  if((n%2==0)and(n/2)%2==1){
  
  long long int val100=res[n-1];
  long long int som100=0;
  while(val100!=0){
   som100++;
   val100/=2;}
  long long int val90=power(2,som100+1);
  res[n-1]^=val90+1;
  res[n-4]^=val90;
  }
  if(n%2==1){
   if(((n-1)/2)%2==1){
  
  long long int val100=res[n-2];
  long long int som100=0;
  while(val100!=0){
   som100++;
   val100/=2;}
  long long int val90=power(2,som100+1);
  res[n-2]^=val90+1;
  res[n-5]^=val90;
  }
  long long int val105=0;
    res[n-1]=val105;
    
   long long int val5=power(2,30);
   if(res[n-1]!=res[n-2]){
   res[n-1]^=val5;
   res[n-2]^=val5;}
   else{
    res[n-1]^=val5;
   res[n-4]^=val5;
    }
   }
  for(auto v:res)cout<<v<<" ";
  cout<<endl;
    
 
 }
  
  
    
 }
 
 
 
    
    
return 0;}
 