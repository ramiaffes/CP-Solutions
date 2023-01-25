#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,k;
 cin>>n>>k; if(n==1){
  if(k==1)cout<<1<<endl;
  else cout<<-1<<endl;}
  else{
 vector<long long int>vect;
 long long int j=1;
 for(j=1;j*j<n;j++){
  if(n%j==0){
  vect.push_back(j);
  vect.push_back(n/j);}
    }
  if(j*j==n){vect.push_back(j);}
 long long int i=0;
 long long int som=0;
 
 if(vect.size()%2==0){
  for(i=0;i<(vect.size()-1);i+=2){
   som++;
   if(som==k)break;
   }
  if(som!=k){
   for(i=(vect.size()-1);i>=1;i-=2){
    som++;
    if(som==k)break;}}}
 else{
  for(i=0;i<(vect.size());i+=2){
   som++;
   if(som==k)break;
   }
  if(som!=k){
   for(i=(vect.size()-2);i>=1;i-=2){
    som++;
    if(som==k)break;}}
  }
 if(som<k)cout<<-1<<endl;
 else cout<<vect[i]<<endl;
 
  
 }
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}