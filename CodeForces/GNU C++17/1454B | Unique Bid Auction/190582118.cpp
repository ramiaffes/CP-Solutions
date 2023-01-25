#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool iscarre(long long int n){
 long long int var=sqrt(n);
 return((var*var)==n);}
int main() {
 fast;
 
  long long int t,n;
  cin>>t;
  while(t--){
   cin>>n;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
  if(n==1){
   cout<<1<<endl;}
  else{
  vector<long long int>vect1(vect);
  sort(vect1.begin(),vect1.end());long long int p=1;
  long long int i=1;
  for(i=1;i<(n);i++){
   if(vect1[i-1]==vect1[i]){
    p+=1;
    continue;
    }
   else if (p>1){p=1;}
   else{
    break;}
   
   }
   
  
  
  if((p>1)){
   cout<<-1<<endl;}
  else {
   cout<<(find(vect.begin(),vect.end(),vect1[i-1])-vect.begin()+1)<<endl;}}}
   
  
  return 0;}