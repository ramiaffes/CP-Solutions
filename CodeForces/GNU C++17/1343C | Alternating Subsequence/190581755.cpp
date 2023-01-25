#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 long long int t,n;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  long long int som=0;
  long long int som1=0;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];}
  for(long long int i(n-1);i>=1;i--){
   if (((vect[i]*vect[i-1])>0)and(vect[i]>vect[i-1])){
    swap(vect[i],vect[i-1]);}}
   bool test=true;
   bool test1=true;
   long long int p=0;
   long long int p2=0;
  for(long long int i(0);i<n;i++){
   if ((vect[i]>0) and (test==true)){
    som+=vect[i];
    p+=1;
    test=false;}
   if ((vect[i]>0) and (test1==false)){
    p2+=1;
    som1+=vect[i];
    test1=true;}
   if ((vect[i]<0) and (test==false)){
    p+=1;
    som+=vect[i];
    test=true;}
   if ((vect[i]<0) and (test1==true)){
    p2+=1;
    som1+=vect[i];
    test1=false;}   }
   if(p>p2){
    cout<<som<<endl;}
   else if(p==p2){
    cout<<max(som,som1)<<endl;}
   else{
    cout<<som1<<endl;}
  }
  
 
  
  
 
   
   
  
    return 0;
}