 #include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int gcd(long long int a,long long int b){
 if(b==0)return a;
 else return gcd(b,a%b); }
 long long int lcm(long long int a,long long int b){
 return a*b/gcd(a,b);}
int main()
{
 fast; 
 long long int n;
 cin>>n;
 long long int max1=0;
 if(n==1){
  cout<<1<<endl;}
 else if(n==2){
  cout<<2<<endl;}
 else{
 for(long long int i(n);i>=3;i--){
  long long int j=i-2;
  for(j=i-2;j>=1;j--){
   if(lcm(i*(i-1),j)==i*(i-1)*j){break;}
   }
   if(max1<=(i*(i-1)*j)){
    max1=i*(i-1)*j;}
   }
 cout<<max1<<endl;}
 
 
 
 
 
 
  
  
  
  
  
 
 
 
  
 
  
  
  
  
  
  
 
 
 
  
  
  
  
 
  
  
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}