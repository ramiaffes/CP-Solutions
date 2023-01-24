#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<long long int,set<long long int>>adj;
 
vector<pair<long long int,long long int>>vect(N);
long long int som1=2*1e9;
long long int som2=0;
long long int val3=0;
 
int main()
{
 fast; 
 long long int n,x,m,t,l,k,r;
 string s;
 cin>>n;
 bool test=false;
 map<long long int,bool>vis;
 long long int j=1;
 long long int som=0;
 while(j<=(1e4)){
  if(vis[(j*(j+1)/2)%n]==0){
  vis[(j*(j+1)/2)%n]=1;som++;}
  j++;
  if(som==n){test=true;break;}}
 if(test==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}