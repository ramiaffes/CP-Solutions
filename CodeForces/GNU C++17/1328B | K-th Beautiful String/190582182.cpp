#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool iscarre(long long int n){
 long long int var=sqrt(n);
 return((var*var)==n);}
int main() {
 fast;
 
  long long int t,n,k;
  cin>>t;
  while(t--){
   cin>>n>>k;
   string s(n,'a');
   long long int k1=k;
   while(!iscarre(8*k1+1) and ((8*k1+1)<=((2*n-1)*(2*n-1)))){
    k1+=1;}
   long long int myint1=sqrt(8*k1+1);
   long long int myint2=(myint1+1)/2;
   s[n-myint2]='b';
   s[n-myint2+k1-k+1]='b';
   cout<<s<<endl;   
   
   
   
  }
  
   
  
  
    return 0;
}