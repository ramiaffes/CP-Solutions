 
#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool istrue(long long int i){
 return (i<0);} 
int main() {
 fast;
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  auto xr=max_element(vect.begin(),vect.end());
  long long int var=(*(xr));
  if((var)==(*(min_element(vect.begin(),vect.end())))){
   cout<<-1<<endl;}
 
  else{
    for (long long  int i(0);i<n;i++){
   vect[i]=vect[i]-(var);}
   if(find_if(xr,vect.end(),istrue)==vect.end()){
    cout<<(xr-vect.begin()+1)<<endl;}
    else{
   cout<<(find_if(xr,vect.end(),istrue)-vect.begin())<<endl;}}
 
}
    return 0;
}
  