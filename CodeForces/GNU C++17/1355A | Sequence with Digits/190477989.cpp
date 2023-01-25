#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int mindigit(long long int u){
 long long int min=9;
 while(u!=0){
  if(min>=(u%10)){
   min=u%10;}
  u=u/10;}
 return min;}
long long int maxdigit(long long int u){
 long long int max=0;
 while(u!=0){
  if(max<=(u%10)){
   max=u%10;}
  u=u/10;}
 return max;}
int main()
{
 fast; 
 long long int t,a,k;
 cin>>t;
 while(t--){
  cin>>a>>k;
  long long int num=a;
  long long int som=1;
  while((mindigit(num)!=0)and(som<k)){
   num=num+mindigit(num)*maxdigit(num);
   som++;
   }
  cout<<num<<endl;
  }
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}