#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int t,n,m;
  cin>>t;
  while(t--){
   cin>>n>>m;
   vector<long long int>vect1(m);
   long long int som=0;
   vector<vector<long long int>>vect(n,vect1);
   long long int min=100;
   long long int som1=0;
   for(long long int i(0);i<n;i++){
    for(long long int j(0);j<m;j++){
     cin>>vect[i][j];
     som+=abs(vect[i][j]);
     if(vect[i][j]<=0){
      som1+=1;}
     if(min>=abs(vect[i][j])){
      min=abs(vect[i][j]);}}}
   if(som1%2==0){
    cout<<som<<endl;}
   else{
    cout<<(som-2*min)<<endl;}
   
   
   
   
  }
  
   
  
  
    return 0;
}