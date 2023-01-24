#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
long long int power(long long int n,long long int po){
 long long int p=1;
 for(long long int i(0);i<po;i++){
  p=(p*2)%998244353;}
 return p%998244353;}
int main()
{
 fast;
 long long int n;
 string s;
 cin>>n;
 cin>>s;
 long long int som=0;
 char val1=s[0]; 
long long int i=0;
  while((i<n)and(val1==s[i])){
   i++;}
 if(i==n){
  som=power(2,n)%998244353;}
 else{
  
 char val2=s[n-1];
 long long int j=n-1;
  while((j>=0)and(val2==s[j])){
   j--;}
 if(val1!=val2){
 som+=(i)%998244353;
 som+=(n-1-j)%998244353;
 som+=1;
 }
else{
 som+=((n-j)*(i+1))%998244353;
 }}
 cout<<som<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}