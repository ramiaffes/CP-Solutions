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
  int t,n;
 cin>>n;
 vector<int>vect(n);
 for(int i(0);i<n;i++){
  cin>>vect[i];}
 int tot=1<<n;
 int som=0;
 for(int mask=0;mask<tot;mask++){
  som=0;
  for(int i=0;i<n;i++){
   int f=1<<i;
   if(mask&f){
    som+=vect[i];
    }
   else{
    som+=-(vect[i]);}}
   if(som%360==0)break;}
 if(som%360==0){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
  
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}