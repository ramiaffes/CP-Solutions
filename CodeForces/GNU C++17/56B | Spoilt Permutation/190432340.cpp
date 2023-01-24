#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
const long long M=1000000007;
 
int main()
{
 fast;
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
long long int i=0;
 while((i<n)and(vect[i]==(i+1))){
  i++;} 
if(i==n){
 cout<<0<<" "<<0<<endl;}
else{
long long int j=n-1;
while(vect[j]==(j+1)){
 j--;}
reverse(vect.begin()+i,vect.begin()+j+1);
if(is_sorted(vect.begin(),vect.end())){
 cout<<(i+1)<<" "<<(j+1)<<endl;}
else{
 cout<<0<<" "<<0<<endl;}
 }
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}