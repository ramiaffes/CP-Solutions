#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
void func(vector<long long int>vect){}
int main()
{
 fast;
 
 long long int n,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 long long int ans=0;
 for(long long int i(0);i<n;i++){cin>>vect[i];}
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]>vect[i+1]){
   ans=max(ans,vect[i]-vect[i+1]);
   vect[i+1]=vect[i];}}
 long long int val=ans;
 long long int som=0;
 while(val!=0){
  som++;
  val/=2;}
cout<<(som)<<endl;
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}