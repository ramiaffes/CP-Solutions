#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 long long int som=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 sort(vect.begin(),vect.end());
 for(long long int i(0);i<n;i++){
  som+=abs(vect[i]-(i+1));}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}