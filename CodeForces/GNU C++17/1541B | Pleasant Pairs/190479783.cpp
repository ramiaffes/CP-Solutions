#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,t;
 cin>>t;
 while(t--){
  cin>>n;
  unordered_map<long long int, long long int> m;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   m[vect[i]]=i+1;}
  long long int som=0;
  for(long long int p(3);p<=(2*n-1);p++){
   for(long long int i(1);i<sqrt(p);i++){
    if((p%i==0) and(m[i]!=0)and (m[(p/i)]!=0)and(m[(p/i)]==p-m[i])){
     som++;}
    }
   }
  cout<<som<<endl;
   
   
 
 
 
 
 
 
 
 
 
 
 
}
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}