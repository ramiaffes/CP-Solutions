#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n;
 long long int t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int p=max_element(vect.begin(),vect.end())-vect.begin();
 long long int d=min_element(vect.begin(),vect.end())-vect.begin();
 cout<<(min(min(n-min(p,d),max(p,d)+1),n-max(p,d)+min(p,d)+1))<<endl;
 
}
 
 
 
 
 
  
   
  
    
  
  
  
  
 
 
   
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}