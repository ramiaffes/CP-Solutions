#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  long long int som=0;
  long long int som2=0;
  vector<long long int>vect1(n);
  vector<long long int>vect2;
  for(long long int i(0);i<n;i++){
   cin>>vect1[i];}
  sort(vect1.begin(),vect1.end());
  for(long long int i(0);i<(n-1);i++){
   for(long long int j(i+1);j<(n);j++){
    if(count(vect2.begin(),vect2.end(),(vect1[j]-vect1[i]))==0){
    vect2.push_back(vect1[j]-vect1[i]);}
    }
  
   }
  cout<<vect2.size()<<endl;
  
}
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}