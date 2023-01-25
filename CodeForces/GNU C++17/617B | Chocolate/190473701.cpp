#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int i=0;
 while((i<n)and(vect[i]==0)){
  i++;}
 if(i==(n))cout<<0<<endl;
 else{
 long long int j=n-1;
 while((j>=0)and(vect[j]==0)){
  j--;}
 long long int som=0;
 long long int p=1;
 for(long long int d(i);d<=j;d++){
  if(vect[d]==0){
   som++;}
  else{
   p*=(som+1);
   som=0;}}
 cout<<p<<endl;}
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}