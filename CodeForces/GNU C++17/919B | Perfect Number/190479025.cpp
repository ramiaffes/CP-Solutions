#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool isperfect(long long int i){
 long long int som=0;
 while(i!=0){
  som+=(i%10);
  i/=10;}
 return(som==10);
 
 
 }
 
int main()
{
 fast; 
 long long int k;
 cin>>k;
 long long int i=10;
 long long int som=0;
 while(som<k){
  if(isperfect(i)){
   som++;}
  i++;}
 cout<<(i-1)<<endl;
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}