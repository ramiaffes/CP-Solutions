#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
long long int power(long long int k,long long int d){
 long long int p=1;
 for(long long int c(0);c<d;c++){
  p*=k;}
 return p;}
int main() {
 fast;
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  map<long long int,long long int>map1;
  if(n%2==0){
   long long int n1=n;
    long long int som=0;
    while((n1%2==0)and(n1!=0)){
     som+=1;
     n1=n1/2;}
    map1[som]=2;
    }
   
  
  for(long long int i(3);i<=sqrt(n);i+=2){
   if((n%i==0)){
    long long int n1=n;
    long long int som=0;
    while((n1%i==0)and(n1!=0)){
     som+=1;
     n1=n1/i;}
    map1[som]=i;
    }}
  map1[1]=n;
  long long int k=map1.rbegin()->first;
  cout<<k<<endl;
  for (long long int i(0);i<(k-1);i++){
   cout<<map1.rbegin()->second<<" ";}
   long long int r=map1.rbegin()->second;
   cout<<((r)*(n/(power(r,k))))<<endl;
  
 }
  
  
 
   
   
  
    return 0;
}