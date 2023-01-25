#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
long long int power(long long int g,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=g;}
 return p;}
int main()
{
 fast; 
 long long int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  long long int som1=0;
  map<long long int,long long int>mapping;
  for(long long int i(0);i<n;i++){
   long long int som=0;
   while(vect[i]%2==0){
    vect[i]/=2;
    som++;}
   if(mapping.find(vect[i])==mapping.end()){
    mapping[vect[i]]=som;
    }
   else{
   mapping[vect[i]]=max(mapping[vect[i]],som);}
   
   
   }
  for (map<long long int ,long long int>::iterator it=mapping.begin(); it!=mapping.end(); ++it){
   som1+=it->second;}
  cout<<som1<<endl;
  }
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}