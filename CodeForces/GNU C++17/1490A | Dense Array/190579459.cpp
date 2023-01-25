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
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
   long long int som1=0;
   for(long long int i(0);i<(n-1);i++){
    long long int som=0;
    long long int s=(max(vect[i+1],vect[i])/min(vect[i+1],vect[i]));
    if(max(vect[i+1],vect[i])%min(vect[i+1],vect[i])!=0){s++;}
    long long int p=1;
    if(s%2==1){s++;}
    while(p<s){som+=1;
     p*=2;
     }
    som1+=(som-1);
    }
   cout<<som1<<endl;
  
   
  
  
  
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}