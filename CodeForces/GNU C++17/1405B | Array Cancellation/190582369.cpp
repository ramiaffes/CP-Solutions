 
#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n;
  cin>>t;
  while(t--){
   cin>>n;
   vector<long long int >vect(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
    long long int som=0;
   for(long long int i(0);i<(n-1);i++){
    if(vect[i]>=0){
     vect[i+1]+=vect[i];
     vect[i]=0;
     }}
    for(long long int i(0);i<n;i++){
     if(vect[i]>=0){
      som+=vect[i];}}
    cout<<som<<endl;
   
   
  }
  
   
  
  
    return 0;
}