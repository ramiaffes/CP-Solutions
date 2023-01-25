#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int t,n,l,r;
 cin>>t;
 while(t--){
 cin>>n>>l>>r;
 map<long long int,long long int>m;
 map<long long int,long long int>m1;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 sort(vect.begin(),vect.end());
 long long int i=0;
 long long int j=n-1;
 long long int som=0;
 long long int som1=0;
 while(i<j){ 
  if((vect[i]+vect[j])>r){
   j--;
   }
  if((vect[i]+vect[j])<=r){
   som+=(j-i);
   i++;
   }
  
  }
 i=0;
  j=n-1;
 while(i<j){ 
  if((vect[i]+vect[j])>(l-1)){
   j--;
   }
  if((vect[i]+vect[j])<=(l-1)){
   som1+=(j-i);
   i++;
   }
  
  }
 cout<<(som-som1)<<endl;}
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}