#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n;
 long long int t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 sort(vect.begin(),vect.end());
 long long int som=0;
 for(long long int i(0);i<n;i++){
  som+=vect[i];}
 if(som%n!=0)cout<<-1<<endl;
 else{
  long long int i=n-1;
  while((i>=0)and(vect[i]>(som/n))){
   i--;}
  cout<<(n-i-1)<<endl;}
 
}
 
 
 
 
 
  
   
  
    
  
  
  
  
 
 
   
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}