#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char ,long long int >hashing;
int main()
{
fast;
long long int n,k;
long long int maximum=0;
long long int minimum=0;
cin>>n>>k;
if(k==0){
 minimum=0;
 maximum=0;}
else if(k==n){
 minimum=0;
 maximum=0;}
else{
 minimum=1;
 maximum=min((n-k),(k-1)*2);
 if(((n-k)-(k-1)*2)>=2){
  maximum+=2;}
 else if(((n-k)-(k-1)*2)==1){
  maximum+=1;}}
cout<<minimum<<" "<<maximum<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}