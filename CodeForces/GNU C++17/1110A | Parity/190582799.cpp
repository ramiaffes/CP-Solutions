#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
    long long int b,k;
  cin>>b>>k;
  long long int som=0;
  vector<long long int>vect(k);
  for(long long int  i(0);i<k;i++){
   cin>>vect[i];
   som+=vect[i];}
  if(b%2==0){
   cout<<(vect[k-1]%2==0?"even":"odd")<<endl;}
  else{
   cout<<(som%2==0?"even":"odd")<<endl;}
 
  
  
 
    return 0;
}