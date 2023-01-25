#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
bool fair(long long int x){
 long long int n=x;
 while(n!=0){
  long long int cr=n%10;
  if((cr!=0)and(x%cr!=0)){
   return false;}
  n/=10;}
 return true;
 }
 
 
int main()
{
 fast; 
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
  bool test=true;
   if(n%2==0){
   for(long long int i(1);i<(n);i+=2){
    test=(s[i]%2==0);
    if(test==true)break;
    }
   if(test==true){
    cout<<2<<endl;}
   else{
    cout<<1<<endl;}}
  else{
   for(long long int i(0);i<(n);i+=2){
    test=(s[i]%2==1);
    if(test==true)break;
    }
   if(test==true){
    cout<<1<<endl;}
   else{
    cout<<2<<endl;}
   }}
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}