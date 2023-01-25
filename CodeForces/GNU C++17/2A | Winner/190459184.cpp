#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<string>vect(n);
 vector<long long int>vect1(n);
 long long int ans=0;
 for(long long int i(0);i<n;i++)cin>>vect[i]>>vect1[i];
 map<string,long long int>mymap;
 map<string,long long int>mymap1;
 string val;
 for(long long int i(0);i<n;i++){
  mymap[vect[i]]+=vect1[i];
  }
 for(long long int i(0);i<n;i++){
  ans=max(ans,mymap[vect[i]]);}
 for(long long int i(0);i<n;i++){
  mymap1[vect[i]]+=vect1[i];
  if((mymap[vect[i]]==ans)and(mymap1[vect[i]]>=ans)){
   cout<<vect[i];
   break;}}
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}