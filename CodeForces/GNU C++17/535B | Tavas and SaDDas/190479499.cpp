#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int g,long long int k){
 long long int p=1;
 for(long long int i(0);i<k;i++){
  p*=g;}
 return p;}
int main()
{
 fast; 
 string n;
 cin>>n;
 long long int result=power(2,n.length())-2;
 long long int som=0;
 for(long long int i(n.length()-1);i>=0;i--){
  if(n[i]=='7'){som+=power(2,n.length()-1-i);}
  else som+=0;}
 result+=som;
 cout<<(result+1)<<endl;
 
 
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}