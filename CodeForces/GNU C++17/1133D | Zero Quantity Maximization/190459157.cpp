#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 long long int ans=0;
 vector<long double>vec(n);
 map<long double ,long long int>map1;
 long long int som=0;
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++)cin>>vect1[i];
 for(long long int i(0);i<n;i++){
  if(vect[i]!=0){
  long double  num=vect1[i];
  vec[i]=-(num)/vect[i];
  map1[vec[i]]++;}
  else if(vect1[i]==0){
   som++;
   }}
 for(long long int i(0);i<n;i++){
   ans=max(ans,map1[vec[i]]);
   }
 cout<<(ans+som)<<endl;
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}