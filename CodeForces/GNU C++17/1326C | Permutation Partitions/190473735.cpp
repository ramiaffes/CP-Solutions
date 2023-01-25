#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n,k;
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 long long int max=0;
 long long int som=0;
 long long int p=1;
 for(long long int i(0);i<(k);i++){
  max+=(n-i);}
 long long int d=0;
 while((d<n)and(vect[d]<=(n-k))){d++;}
 long long int j=n-1;
 while((j>=0)and(vect[j]<=(n-k))){j--;;}
 for(long long int i(d);i<=j;i++){
  if(vect[i]<=(n-k)){
   som++;
   }
  else{
   p*=((som+1)%998244353);
   p=p%998244353;
   som=0;}}
 cout<<max<<" "<<(p%998244353)<<endl;
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}