#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast;
 
 long long int n,k,a,b,t;
 cin>>t;
 while(t--){
  cin>>n;
  if(n>=1900){
   cout<< "Division 1"<<endl;}
 else if((n>=1600)and(n<=1899)){
  cout<< "Division 2"<<endl;
  }
else if((n>=1400)and(n<=1599)){
cout<< "Division 3"<<endl;
  }
else{
 cout<< "Division 4"<<endl;}
 }
 
return 0;}  