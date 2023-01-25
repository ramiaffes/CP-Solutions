#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int num(char cr){
 return (int)cr-48;} 
 
int main()
{
 fast;  
 int t;
 int b,a;
 cin>>t;
 while(t--){
  cin>>a>>b;
  int som= abs(b-a)/10;
  if (abs(b-a)%10!=0){
   som+=1;}
   cout<<som<<endl;
  }
  
  
  
  
 
 
 
 return 0;
}