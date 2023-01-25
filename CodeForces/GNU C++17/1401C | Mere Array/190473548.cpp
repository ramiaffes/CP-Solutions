#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int  n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 bool  test=true;
 vector<long long int>result(vect.begin(),vect.end());
 sort(result.begin(),result.end());
 for(long long int i(0);i<n;i++){
  if(vect[i]!=result[i]){
   if(vect[i]%result[0]!=0){
    test=false;break;}}}
  if(test==true)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}