#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
long long int som=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
  }
  bool test=true;
  if(n==1){
    cout<<"yes"<<endl;}
  else{
  long long int ci=1;
  for(long long int i(1);i<n;i++){
   vect[i]+=vect[i-1]-(ci-1);
   vect[i-1]=ci-1;
   if(vect[i]<ci){test=false;
   break;}
   ci++;
  }
  if(test==false)cout<<"no"<<endl;
  else cout<<"yes"<<endl;}
 
 
  
   
  
  
  
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}