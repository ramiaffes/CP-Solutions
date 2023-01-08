#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
 
int main()
{
 fast; 
 string s;
 long long int n,m,x,y,t;
    cin>>t;
    while(t--){
  cin>>n;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++)cin>>vect[i];
  long long int i=0;
  long long int j=n-1;
  long long int som2=0;
  long long int som1=0;
  long long int som4=0;
  long long int som5=0;
  long long int res=0;
  int test=0;
  while(i<=j){
   if(test==0){
    while(i<=j){
    som1+=vect[i];
    i++;if((som1>som2))break;}som4+=som2;som2=0;res++;}
   else{
    while(i<=j){
    som2+=vect[j];
    j--;if((som2>som1))break;}som5+=som1;som1=0;res++;}
   test=1-test;}
 if(som1!=0)som5+=som1;
 if(som2!=0)som4+=som2;
 cout<<res<<" "<<som5<<" "<<som4<<endl;}
    
    
 
 
 
 
 
 
 
 
 
 
 
 
 
return 0;}