#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long  int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  vector<long long int>vec(n);
  vector<long long int>res;
  for(long long int i(0);i<n;i++)cin>>vect[i];
  long long int val=vect[0];
  for(long long int i(0);i<n;i++){
   if(vect[i]<val){
    vec[i]=val;}
   else{
    vec[i]=vect[i];
    val=vect[i];}
   }
  long long int i=n-1;
  while(i>=0){
   long long int j=i;
   while((j>=0)and(vec[j]==vec[i])){
    j--;
    }
   for(long long int d(j+1);d<=i;d++){
    cout<<vect[d]<<" ";}
   i=j;
   }
  cout<<endl;
 
  }
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}