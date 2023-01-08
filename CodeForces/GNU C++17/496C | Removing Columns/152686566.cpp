#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int n,m;
 cin>>n>>m;
 vector<string>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  }
 long long int som=0;
 bool test=true;long long int j=0;
 while(test==true){
  test=false;
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]>vect[i+1]){
   test=true;
    j=0;
   while(vect[i][j]==vect[i+1][j]){
    j++;}
   break;
   }
  
  }
 if(test==true){som++;
  for(long long int i(0);i<n;i++){
   vect[i].erase(j,1);
   }}
   
    
  
 }
 cout<<som<<endl;
  
  
  
 
 
    
return 0;}