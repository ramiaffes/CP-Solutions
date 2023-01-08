#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
int main()
{
 fast;
 
 long long int n,k,t;
 cin>>t;
 while(t--){
  cin>>n>>k;
  vector<long long int>vect(n);
  for(long long  int i(0);i<n;i++)cin>>vect[i];
  sort(vect.begin(),vect.end());
  long long int som=0;
  for(long long int i(0);i<(n-2*k);i++){
   som+=vect[i];}
 for(long long int i(0);i<(k);i++){
  som+=vect[n-2*k+i]/(vect[n-k+i]);
  }
 cout<<som<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
return 0;}  