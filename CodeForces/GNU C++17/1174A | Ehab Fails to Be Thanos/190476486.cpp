#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
vector<long long int>vect(2*n);
for(long long int i(0);i<(2*n);i++){
 cin>>vect[i];}
sort(vect.begin(),vect.end());
long long int i=0;
long long int j=2*n-1;
long long int som1=0;
long long int som2=0;
while(i<j){
 som1+=vect[i];
 som2+=vect[j];
 j--;
 i++;
 }
if(som1==som2){
 cout<<-1<<endl;}
else{
 for(long long int i(0);i<(2*n);i++){
  cout<<vect[i]<<" ";}}
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}