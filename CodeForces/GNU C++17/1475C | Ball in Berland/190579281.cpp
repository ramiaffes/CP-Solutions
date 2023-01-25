#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,a,b,k;
 string s;
 cin>>t;
 while(t--){
  cin>>a>>b>>k;
  vector<long long int>vect1(k);
  vector<long long int>vect2(k);
  vector<long long int>siri1(a+1);
  vector<long long int>siri2(b+1);
  long long int som=0;
  long long int p=0;
  for(long long int i(0);i<k;i++){
   cin>>vect1[i];
   }
  for(long long int i(0);i<k;i++){
   cin>>vect2[i];
   }
  for(long long int i(0);i<k;i++){
   siri1[vect1[i]]++;
   som++;
   siri2[vect2[i]]++;}
  for(long long int j(1);j<=a;j++){
   p+=siri1[j]*(siri1[j]-1)/2;
   }
   
  for(long long int j(1);j<=b;j++){
   p+=siri2[j]*(siri2[j]-1)/2;
   }
  cout<<(som*(som-1)/2-p)<<endl;
  
  
 
  
  
  
  
  
  
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}