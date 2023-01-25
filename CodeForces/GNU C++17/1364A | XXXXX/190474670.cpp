#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,n,x;
 cin>>t;
 while(t--){
  cin>>n>>x;
  vector<long long int>vect(n);
  long long int som=0;
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   som+=vect[i];}
  if(som%x!=0)cout<<n<<endl;
  else{
   long long int i=0;
   long long int j=n-1;
   while(i<j){
   if(vect[j]%x==0){
    j--;}
   else if(vect[i]%x==0){
    i++;}
   else{
    break;}}
   if(vect[j]%x==0){cout<<-1<<endl;}
   else {
    cout<<(max((n-i-1),(j)))<<endl;
    }
   }
  }
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}