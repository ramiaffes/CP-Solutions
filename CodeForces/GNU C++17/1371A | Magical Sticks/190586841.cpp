#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  if(n==1){
   cout<<1<<endl;}
  else{
   cout<<(n-1)/2+1<<endl;}
 }
 
 
 
 return 0;
}