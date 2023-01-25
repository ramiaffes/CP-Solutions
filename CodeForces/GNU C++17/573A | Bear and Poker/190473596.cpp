#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 bool test=true;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  while(vect[i]%2==0)vect[i]/=2;
  while(vect[i]%3==0)vect[i]/=3;}
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]!=vect[i+1]){
   test=false;break;}}
 if(test==false)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}