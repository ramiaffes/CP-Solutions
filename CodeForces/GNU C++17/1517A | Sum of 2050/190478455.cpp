#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=10;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 long long int a,b,c;
 cin>>t;
 while(t--){
  cin>>n;
  if(n%2050!=0){
   cout<<-1<<endl;}
  else{
   long long int som=0;
   while(n!=0){
   long long int it=17;
   while(n<(2050*power(it))){
    it--;
    }
   n-=2050*power(it);
   som+=1;}
   cout<<som<<endl;
   
   }
}
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}