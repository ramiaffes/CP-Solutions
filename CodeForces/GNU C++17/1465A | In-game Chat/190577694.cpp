#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int power(long long int var,long long int exp){
long long int p=1;
for(long long int i(1);i<=exp;i++){
   p*=var;}
   return p;}
int main()
{
 fast; 
 int t,n;
 cin>>t;
 string s;
 while(t--){
  cin>>n;
  cin>>s;
  long long int som=0;
  long long int i=n-1;
  while((i<(n)) and(s[i]==')')){
   som++;
   i--;
   }
   cout<<((som>n/2)?"yes":"no")<<endl;
 
  }
  
  
  
  
  
  
 
  
 
 
 
 return 0;
}