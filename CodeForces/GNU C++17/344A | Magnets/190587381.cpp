#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <string> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 
 fast; 
 int n;
 int result(1); 
 cin>>n;
 vecteur vect(n);
 for (int i(0);i<n;++i){
  cin>>vect[i];}
 string dernier(vect[0]);
 if(n==1){cout<<1;}
 else{
 for (int i(1);i<n;i++){
  if (vect[i]!=dernier){
   result++;
   dernier=vect[i];}
  }
 cout<<result;}
 
 
  
  
  
  
  
 
 
 
 
 
  
  
  
 
 
 
 return 0;
}