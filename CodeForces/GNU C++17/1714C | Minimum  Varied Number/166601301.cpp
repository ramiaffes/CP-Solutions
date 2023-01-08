#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
long long int power(long long int var,long long int exp){
long long int p=1;
for(long long int i(1);i<=exp;i++){
   p*=10;}
   return p;}
int main() {
 fast;
 long long int t,x;
 
 cin>>t;
 while(t--){
  long long int val=0;
  long long int p=1;
  cin>>x;
  if(x>45){
   cout<<-1<<endl;}
  else{
   long long int i=9;
   while(x>i){
    x=x-i;
    val+=p*i;
    i-=1;
    p*=10;
  }
    val+=p*x;
   cout<<val<<endl;}
   
  
  
  
 }
  
  
 
   
   
  
    return 0;
}