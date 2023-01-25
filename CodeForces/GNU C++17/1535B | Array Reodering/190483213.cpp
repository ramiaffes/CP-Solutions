#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool Iseven (int i) { return !((i%2)==1); }
long long int gcd(long long int a, long long int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);}
int main()
{
 fast; 
 long long int  n;
 long long int t;
cin>>t;
 
while(t--){
 cin>>n;
 long long int som=0;
 vector<long long int >vector(n);
 for(long long int i(0);i<n;i++){
  cin>>vector[i];}
 partition(vector.begin(),vector.end(),Iseven);
 for(long long int i(0);i<(n-1);i++){
  for(long long int j(i+1);j<n;j++){
   if(gcd(vector[i],2*vector[j])>1){som++;}}}
 cout<<som<<endl;
  
  
   
  
    
  
  
  
  
 
 
   }
  
  
  
  
  
  
 
 
   
  
  
  
  
  
  
     
  
  
  
 
  
  
  
  
  
  
  
 
  
 
  
  
   
  
  
  
  
 
   
  
  
 
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}