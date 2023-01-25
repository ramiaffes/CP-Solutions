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
 long long int num2=n[n.length()-1];
 long long int num1=n[n.length()-2];
 cout<<((1+power(2,((num1*10+num2)%4+4))+power(3,((num1*10+num2)%4+4))+power(4,(num2%2+2)))%10)<<endl;
 
 
 
 
 
 
 
 
  
  
  
 
 
 
 
 
  
  
  
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}