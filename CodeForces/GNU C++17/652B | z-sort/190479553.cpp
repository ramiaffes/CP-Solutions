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
 long long int num=0;
 if(n%2==1){
  num=n;
  }
 else{
  num=n-1;
  } 
 for(long long int i(1);i<(num);i+=2){
  long long int val=vect[i];
  vect[i]=vect[i+1];
  vect[i+1]=val;
   }
 for(long long int i(0);i<n;i++){
  cout<<vect[i]<<" ";} 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}