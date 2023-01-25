#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  long long int som=0;
  long long int som2=0;
  vector<long long int>vect1(n);
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];
   som+=vect1[i];
   som2^=vect1[i];}
  if(som==2*som2){
   cout<<0<<endl;
   cout<<endl;
   }
  else{
   cout<<2<<endl;
            cout<<som2<<" ";
            cout<<(som2+som)<<endl;}
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}