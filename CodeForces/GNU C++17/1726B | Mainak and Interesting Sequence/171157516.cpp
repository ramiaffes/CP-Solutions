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
 long long int  n,t,m;
 cin>>t;
 while(t--){
  cin>>n>>m;
  if(n==1){
   cout<<"YES"<<endl;
   cout<<m<<endl;}
  else if(m%2==1){
   if(n%2==0)
   cout<<"NO"<<endl;
   else{
    if(m<=(n-1))cout<<"NO"<<endl;
    else {cout<<"YES"<<endl;for(long long int i(0);i<(n-1);i++){
    cout<<1<<" ";}
   cout<<(m-n+1)<<endl;}
    }}
  else if(n%2==1){
   if(m<=(n-1))cout<<"NO"<<endl;
   else{cout<<"YES"<<endl;for(long long int i(0);i<(n-1);i++){
    cout<<1<<" ";}
   cout<<(m-n+1)<<endl;}
   }
  else{
   if(m<=(n-1))cout<<"NO"<<endl;
   else {
    cout<<"YES"<<endl;for(long long int i(0);i<(n-2);i++){
    cout<<1<<" ";}
   cout<<((m-n+2)/2)<<" ";
   cout<<((m-n+2)/2)<<endl;}
   
   }
   
  }
  
return 0;}