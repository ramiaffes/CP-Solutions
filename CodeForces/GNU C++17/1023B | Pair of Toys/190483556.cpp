#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 if((k<=2)or(k>=(2*n))){
  cout<<0<<endl;}
 else if(k%2==0){
  cout<<(min(n-k/2,k/2-1))<<endl;}
 else{
  cout<<(min(n-k/2,k/2))<<endl;}
 
 
 
 
 
 
 
return 0;}