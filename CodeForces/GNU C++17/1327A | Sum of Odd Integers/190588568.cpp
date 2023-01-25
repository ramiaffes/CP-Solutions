#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool parity(long long int n){return n%2;}
 long long int result(long long int k){
 return k*k;
 
 }
 
 
 
int main()
{
 fast;
 long long int t;
 cin>>t;
 long long int n,k;
 
 while(t--){
  cin>>n>>k;
  if (parity(n)!=parity(k))
{cout<<"NO"<<endl;} 
 else{
  if (n>=result(k)){
   cout<<"YES"<<endl;}
  else{
   cout<<"NO"<<endl;}
 }}
 
 
 return 0;
}