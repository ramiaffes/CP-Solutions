#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,bool>vis;
map<long long int ,long long int >adj;
long long int som=0;
int main()
{
fast;
long long int n,k,x;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];}
sort(vect.begin(),vect.end());
long long int i=0;
while((i<n)and(vect[i]==vect[0])){
 i++;}
if(i==n){
 cout<<"YES"<<endl;}
else if(vect[n-1]==vect[i]){
 cout<<"YES"<<endl;}
else{
 long long int j=n-1;
 while((j>=0)and(vect[j]==vect[n-1])){
 j--;}
if(vect[j]!=vect[i]){
 cout<<"NO"<<endl;}
else{
 if((vect[i]-vect[0])==(vect[n-1]-vect[j])){
  cout<<"YES"<<endl;}
 else{
  cout<<"NO"<<endl;}
 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}