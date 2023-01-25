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
 vector<long long int>result(vect.begin(),vect.end());
 sort(result.begin(),result.end());
 long long int i=0;
 while((result[i]==vect[i])and(i<n)){
  i++;}
 if(i==n)cout<<"YES"<<endl;
 else{
  long long int j=n-1;
 while((result[j]==vect[j])and(j>=0)){
  j--;}
 bool test=true;
 for(long long int d(i+1);d<j;d++){
  if(result[d]!=vect[d]){
   test=false;
   break;
   }}
  if(test==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;}
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}