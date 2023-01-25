#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int t;
 cin>>t;
 long long int x1,y1,x2,y2;
 while(t--){
  cin>>x1>>y1>>x2>>y2;
  if ((x1==x2) and(y1==y2)){
   cout<<0<<endl;}
  else if ((abs(x1-x2)==0)){
   cout<<abs(y1-y2)<<endl;}
  else if(abs(y1-y2)==0){
   cout<<abs(x1-x2)<<endl;}
  else{
  cout<<(abs(x1-x2)+abs(y1-y2)+2)<<endl;}}
 
    
    
 
    
   
    
    
    return 0;
}