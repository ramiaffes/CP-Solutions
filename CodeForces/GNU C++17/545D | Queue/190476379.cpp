#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
  sort(vect.begin(),vect.end());
 long long int som=0;
 long long int res=1;
 for(long long int i(0);i<(n-1);i++){
  if(som<=vect[i])
  som+=vect[i];
  if(som<=vect[i+1])res++;
  }
 cout<<res<<endl;
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}