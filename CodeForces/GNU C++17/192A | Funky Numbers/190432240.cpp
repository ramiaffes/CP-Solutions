#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
map<long long int,long long int>hashing;
map<string,long long int>hashing1;
int main()
{
 fast;
 long long int n;
 cin>>n;
 long long int k=1;
 while(k*(k+1)/2<=n){
  k++;
  }
k--;
long long int i=1;
long long int j=k;
bool test=false;
while(i<=j){
 if((j*(j+1)/2+i*(i+1)/2)<n){
  i++;}
 else if((j*(j+1)/2+i*(i+1)/2)>n){
  j--;}
 else{test=true;break;}
 }
if(test==true)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 
 
  
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}