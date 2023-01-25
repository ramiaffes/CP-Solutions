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
 vector<long long int >vect(4);
 for(long long int i(0);i<4;i++){
  cin>>vect[i];}
 long long int  d=max(vect[0],vect[1]);
 long long int r=max(vect[2],vect[3]);
 sort(vect.begin(),vect.end());
 if((max(r,d)==vect[3])and(min(r,d)==vect[2]))
 cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
  
  
      
  
  
   
  
    
  
  
  
  
 
 
   }
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}