#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int  n,k,a;
 unordered_map<int, int> m;
 cin>>n>>k;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>a;
  vect[i]=a%k;}
 sort(vect.begin(),vect.end());
 for (long long int i = 0; i < n; i++)
        m[vect[i]]++; 
      auto it= unique(vect.begin(),vect.end());
      vect.resize(distance(vect.begin(), it));
       long long int som1=0;
        long long int som2=0;
     for (long long int i = 0; i < vect.size(); i++){
   
   if((vect[i])==((k-vect[i])%k)){
    som1+=(m[(vect[i])]/2)*2;}
  else{
   som2+=min(m[(vect[i])],m[(k-vect[i])%k])*2;}
 }
 cout<<(som1+som2/2)<<endl;
 
 
 
 
 
  
  
  
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}