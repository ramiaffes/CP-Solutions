#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n,k;
  cin>>t;
  while(t--){
   cin>>n>>k;
   vector<long long int >vect(n*k);
   for(long long int i(0);i<(n*k);i++){
    cin>>vect[i];}
   long long int som=0;
   if(n%2==1){
    for(long long int i(n*k-((n-1)/2)-1);i>=(n*k- (((n-1)/2+1)*(k)+(n-1)/2));i-=((n-1)/2+1)){
     som+=vect[i];
     }cout<<som<<endl;}
   else{
    for(long long int i(n*k-(n/2)-1);i>=(n*k- ((n/2+1)*(k)+n/2));i-=((n)/2+1)){
     som+=vect[i];
     }cout<<som<<endl;}
    }
     
  
   
  
  
    return 0;
}