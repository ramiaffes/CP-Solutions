#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 sort(vect.begin(),vect.end());
 long long int i=n-2;
 while((i>=0)and(vect[n-1]%vect[i]==0)){
  i--;}
 if(i==-1){
  long long int j=n-1;
  while(j>=1){
   if(vect[j]==vect[j-1]){
    break;}
    j--;}
  cout<<vect[j-1]<<" "<<vect[n-1]<<endl;}
 else{
  cout<<vect[i]<<" "<<vect[n-1]<<endl;}
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}