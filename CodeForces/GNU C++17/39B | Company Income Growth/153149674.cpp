#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 
 long long int t,n,k; 
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int val=1;
 long long int som=0;
 for(long long int i(0);i<n;i++){
  if(vect[i]!=val){
   continue;}
 som++;
 val++;}
val=1;
cout<<som<<endl;
 for(long long int i(0);i<n;i++){
  if(vect[i]!=val){
   continue;}
 cout<<(2000+i+1)<<" ";
 val++;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}