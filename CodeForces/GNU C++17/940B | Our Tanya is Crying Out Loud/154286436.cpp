#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,k,a,b;
 cin>>n>>k>>a>>b;
 long long int som=0;
 long long int val=n;
 if(n==1){
  cout<<0<<endl;}
 else if(k==1){
  cout<<((n-1)*a)<<endl;
  }
 else{
  while(val!=1){
   if(val%k!=0){
    som+=(val%k)*a;
    val-=(val%k);
    if(val==0){val++;som-=a;}}
   else{
   som+=min((val/k)*(k-1)*a,b);
   val/=k;}}
 cout<<som<<endl;}
 
 
return 0;}  