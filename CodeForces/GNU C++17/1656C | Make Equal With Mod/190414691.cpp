#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
int main()
{
 fast; 
 string s;
 long long int n,b,a,t,k;
    cin>>t;
    while(t--){
  cin>>n;
  vector<long long int>vect(n);
  bool ok1=false;bool ok2=false;
  for(long long int i(0);i<n;i++){cin>>vect[i];
   if(vect[i]==0)ok1=true;
   if(vect[i]==1)ok2=true;
   }
  if(ok1 and ok2){
   cout<<"NO"<<endl;}
 else if(not ok2){
cout<<"YES"<<endl;}
else{
bool test=false;
sort(vect.begin(), vect.end());
for(long long int i=0;i<(n-1);i++){
 if((vect[i])==vect[i+1]-1){
 test=true;}}
if(test==true){cout<<"NO"<<endl;}
else{cout<<"YES"<<endl;}}}
  
 
 
 
 
return 0;}