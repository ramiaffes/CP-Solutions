#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<(n);i++){
 cin>>vect[i];}
sort(vect.begin(),vect.end());
long long int j=0;
long long int max1=0;
for(long long int i(0);i<n;i++){
 while((j<n)and((vect[j]-vect[i])<=5)){
  j++;
  max1=max(max1,j-i);}}
cout<<max1<<endl;
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}