#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int t,n,x;
 cin>>t;
 while(t--){
  cin>>n>>x;
  vector<long long int >vect(n);
  vector<long long int>vec(n);
  for (long long int i(0);i<n;i++){
   cin>>vect[i];}
  for (long long int i(0);i<n;i++){
   cin>>vec[i];} 
   bool test;
  if(n==1){
   cout<<(((vec[0]+vect[0])<=x)?"YES":"NO")<<endl;}
  else{
  for(long long int j(n-1);j>=1;j--){
   long long int d=j-1;
    test=((vec[j]+vect[j])>x);
   while(((vec[j]+vect[j])>x)and(d>=0)){
    swap(vec[j],vec[d]);
    test=((vec[j]+vect[j])>x);
    d--;
    }
    if(test==true){
     break;}}
    if((test==false) and((vec[0]+vect[0])<=x)){
     cout<<"YES"<<endl;}
    else{
     cout<<"NO"<<endl;}}
   
  
  
 }
 
 
    return 0;
}