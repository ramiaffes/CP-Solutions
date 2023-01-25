#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
  
int main()
{
 fast;
 long long int k,n;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){
 vect[i]=i+1;}
long long int i=0;
long long int j=n-1;
while(i<j){
 cout<<vect[i]<<" "<<vect[j]<<" ";
 i++;
 j--;}
if(i==j)cout<<vect[i]<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}