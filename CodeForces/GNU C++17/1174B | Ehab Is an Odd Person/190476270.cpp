#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 bool test=false;
 bool test1=false;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if(vect[i]%2!=0){
   test=true;
   }
  if(vect[i]%2==0)test1=true;
   }
 if((test==true)and(test1==true)){
  sort(vect.begin(),vect.end());
  }
 for(long long int i(0);i<n;i++){
  cout<<vect[i]<<" ";}
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}