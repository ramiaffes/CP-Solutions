#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t,n,x; 
 
 cin>>t;
 while(t--){
  cin>>n;
  cin>>x;
 if ((n==1)or(n==2)){
  cout<<1<<endl;}
  else{
   if ((n-2)%x==0){
  cout<<(n-2)/x+1<<endl;}
  else{
   cout<<(n-2)/x+2<<endl;}}
 }
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}
 