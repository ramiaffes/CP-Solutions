#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,vector<long long int>>adj;
long long int som=0;
long long int val=0;
 
 
int main()
{
 fast; 
 long long int n,k;
 string s,s2;
 cin>>n;
 bool test=false;
 while(n!=1){
  long long int n1=n;
  cout<<n<<" ";
   test=false;
  for(long long int i(2);i*i<=n;i++){
   if(n%i==0){
    n1=n/i;test=true;break;}}
  if(test==false)break;
  n=n1;}
 cout<<1<<endl;
 
 
 
 
 
 
 
return 0;}