#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int t,n,x;
 
 cin>>t;
 while(t--){
 cin>>n>>x;long long int som=0;
 vector<long long int>vect(n);
 for(long long int i(0);i<(n);i++){
  cin>>vect[i];
  if(vect[i]%2==1)som++;}
 if(som==0){
  cout<<"NO"<<endl;}
 else{
 long long int som2=n-som;
 long long int m=min(som,x);
 if(m%2==0)m-=1;
 if(som2>=(x-m)){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
 }}
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}