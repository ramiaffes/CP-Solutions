#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int n,q;
 cin>>q;
 while(q--){
  cin>>n;
  vector<long long int>vect(n);
  long long int som=0;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   som+=vect[i];}
  cout<<((som-som%n+n*(som%n!=0))/n)<<endl;
  }
 
  
  
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}