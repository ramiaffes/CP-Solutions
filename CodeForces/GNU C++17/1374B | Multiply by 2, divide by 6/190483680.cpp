#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n,k,t;
 
 cin>>t;
 while(t--){
 cin>>n;
 long long int som1=0;
 long long int som2=0;
 while(n%3==0){
  som1++;
  n/=3;}
 while(n%2==0){
  som2++;
  n/=2;}
 if(n!=1){
  cout<<-1<<endl;}
 else if(som1<som2){
  cout<<-1<<endl;}
 else{
  cout<<(2*som1-som2)<<endl;}
 
 
 }
 
 
return 0;}