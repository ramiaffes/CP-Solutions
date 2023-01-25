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
 long long int som=0;
 while(n!=0){
  if(n%k==0){
  som+=1;
  n/=k;}
  else{
  som+=n%k;
  n-=(n%k);}
 
 
 
 
 
 
 
}
cout<<som<<endl;}
 
 
return 0;}