#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
 
int main() {
 fast;
 long long int t,n,k;
 string s;
 cin>>t;
 while(t--){
  cin>>n>>k;
  if(n==k){
   cout<<"YES"<<endl;
   for(int i(0);i<(k);i++){
    cout<<1<<" ";}
    cout<<endl;
   }
  else if(k%2==0){
   if(n%2==1){
    cout<<"NO"<<endl;}
   else if(n>=k){
    cout<<"YES"<<endl;
    for(int i(0);i<(k-1);i++){
     cout<<1<<" ";}
    cout<<((n-(k-1)))<<endl;}
   else {
    cout<<"NO"<<endl;}}
  else{
    if(n%2==1){
     if((n>=k)){
      cout<<"YES"<<endl;
    for(int i(0);i<(k-1);i++){
     cout<<1<<" ";}
    cout<<(n-(k-1))<<endl;}
   else{
    cout<<"NO"<<endl;}
     }
   else{
    if((n)/2>=k){
      cout<<"YES"<<endl;
    for(int i(0);i<(k-1);i++){
     cout<<2<<" ";}
    cout<<(((n)/2-(k-1))*2)<<endl;}
   else{
    cout<<"NO"<<endl;}
    }
   }
  
  
  
  
  
 }
  
  
 
   
   
  
    return 0;
}