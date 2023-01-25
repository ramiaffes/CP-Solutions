#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int x;
 cin>>x;
 long long int num=x;
 vector<long long  int>vect;
 vector<long long  int>result;
 for(long long int i(2);i<=sqrt(num);i++){
  long long int p=1;
  while(x%i==0){
   p*=i;
   x/=i;}
  if(p!=1){ 
  vect.push_back(p);}
  }
 for(long long int i(2);i<=sqrt(num);i++){
  long long int p=1;
  while(x%(num/i)==0){
   p*=(num/i);
   x/=(num/i);}
  
  if(p!=1){
  vect.push_back(p);}
  }
 long long int tot=1<<vect.size();
 long long int p1=1;
 long long int p2=1;
 for(int mask=0;mask<tot;mask++){
  p1=1;
  p2=1;
  for(long long int i=0;i<vect.size();i++){
   long long int f=1<<i;
   if(mask&f){
    p1*=vect[i];
    }
   else{
    p2*=vect[i];}}result.push_back(max(p1,p2));}
  
  sort(result.begin(),result.end());
  cout<<result[0]<<" "<<(num/result[0])<<endl;
    
  
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}