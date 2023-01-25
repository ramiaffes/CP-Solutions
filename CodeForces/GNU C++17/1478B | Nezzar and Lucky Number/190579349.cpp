#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,q,d;
 string s;
 cin>>t;
 while(t--){
  cin>>q>>d;
  vector<long long int >vect(q);
  for(long long int i(0);i<q;i++){
   cin>>vect[i];
   }
  
 for(long long int i(0);i<q;i++){
  if(vect[i]/d>=10){
   cout<<"yes"<<endl;}
  else{
   long long int j=0;
   bool test=false;
   long long int som=vect[i]%d+d;
   while((j<(vect[i]/d))and(test==false)){
    test=((som%10)==d);
    j++;
    som+=d;
    }
    if(test==false)cout<<"no"<<endl;
    else cout<<"yes"<<endl;}
   }
 
 
 
  
  
  
  
  
  
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}