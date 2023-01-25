#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n,x,y,myint(0),max(0);
  cin>>t;
  while(t--){
   cin>>n>>x>>y;
   if ((y-x)<=(n-1)){
    myint=y-x;}
   else{
    long long int i=1;
    while(i<=(n-1)){
     if((y-x)%i==0){
      myint=i;
      }
      i++;}}
    
   if((y-((y-x)/myint)*(n-1))>=1){
    max=y;}
   else{
    max=y+((y-x)/myint)*(n-1-(y-1)/((y-x)/myint));}
   long long int var=max;
   for(long long int i(0);i<n;i++){
    cout<<var<<" ";
    var-=(y-x)/myint;}
    cout<<endl;
   
   
   
  }
  
   
  
  
    return 0;
}