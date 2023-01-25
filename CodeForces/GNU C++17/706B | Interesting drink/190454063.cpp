#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
int main()
{
 fast; 
 long long int n,q;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 sort(vect.begin(),vect.end());
 cin>>q;
 vector<long long int>vect1(q);
 for(long long int i(0);i<q;i++){
  cin>>vect1[i];}
 vector<long long int>res(q);
 for(long long int j(0);j<q;j++){
  res[j]=-1;}
 for(long long int j(0);j<q;j++){
 if(res[j]!=-1)continue;
 res[j]=upper_bound(vect.begin(),vect.end(),vect1[j])-vect.begin();}
 
for(long long int j(0);j<q;j++){
 cout<<res[j]<<endl;}
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}