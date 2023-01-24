#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
map<long long int,bool>vis;
long long int som=0;
long long gcd(long long a, long long b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{
 fast; 
 long long int n,q,k,l,r,x,y;
 cin>>x>>y;
 cin>>n;
 x=x%1000000007;
 y=y%1000000007;
 long long int x1=(y-x)%1000000007;
 
 if((n%3==2)and((n/3)%2==1)){
  if((-1*y)>=0){
   cout<<((-1*y)%1000000007)<<endl;}
  else{
   cout<<((1000000007-1*y)%1000000007)<<endl;}}
 else if(n%3==2){
  if((y)>=0){
   cout<<((y)%1000000007)<<endl;}
  else{
   cout<<(1000000007+1*y)<<endl;}}
 else if((n%3==1)and((n/3)%2==1)){
  if((-1*x)>=0){
   cout<<((-1*x)%1000000007)<<endl;}
  else{
   cout<<((1000000007-1*x)%1000000007)<<endl;}
  }
  else if((n%3==1)){
    if((x)>=0){
   cout<<((x)%1000000007)<<endl;}
  else{
   cout<<((1000000007+1*x)%1000000007)<<endl;}}
else{
 if(((n/3)%2==0)){
  if((-1*x1)>=0){
   cout<<((-1*x1)%1000000007)<<endl;}
  else{
   cout<<((1000000007-1*x1)%1000000007)<<endl;}}
 else{
  if((x1)>=0){
   cout<<((x1)%1000000007)<<endl;}
  else{
   cout<<((1000000007+1*x1)%1000000007)<<endl;}
  }
 }
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}