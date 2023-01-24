#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int ans=1e4;
map<long long int,long long int>hashing;
map<long long int,long long int>hashing1;
int main()
{
 fast;
 long long int t,k, n,m,x,y;
 string s;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
sort(vect.begin(),vect.end());
long long int diff=vect[n-1]-vect[0];
long long int i=0;
while((i<n)and(vect[i]==vect[0])){
 i++;}
if(i==n){
 cout<<diff<<" ";
 cout<<((n-1)*(n)/2)<<endl;}
else{
 long long int j=n-1;
while((j>=0)and(vect[j]==vect[n-1])){
 j--;}
cout<<diff<<" ";
cout<<((n-1-j)*i)<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}