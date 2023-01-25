#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int t;
 int l,r;
 
 cin>>t;
 for (int i(0);i<t;i++){
  cin>>l>>r;
  if(r%2==0){
   if (l<=(r/2)){
    cout<<r/2<<" "<<r;}
   else{
    cout<<-1<<" "<<-1;}}
  else{
   if (l<=(r-1)/2){
    cout<<(r-1)/2<<" "<<r-1;}
   else{cout<<-1<<" "<<-1;}}
   cout<<" "; }
  
  
  
   
 
 
 
 
 
 return 0;
}