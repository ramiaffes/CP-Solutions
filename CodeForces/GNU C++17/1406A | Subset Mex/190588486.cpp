#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast;
 int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  int i(0),j;
  vector<int> myvector(n);
  for (int r(0);r<n;r++){
   cin>>myvector[r];}
  sort(myvector.begin(),myvector.end());
 
  if (find(myvector.begin(), myvector.end(), 0)==myvector.end()){cout<<0<<endl;}
  else if (count(myvector.begin(), myvector.end(), 0)==1) {
   while(find (myvector.begin(), myvector.end(), i)!=myvector.end()){
   i++;}
   cout<<i<<endl;}
  else{
   while(find (myvector.begin(), myvector.end(), i)!=myvector.end()){
   i++;}
   j=i;
   i=0;
   while(count(myvector.begin(), myvector.end(), i)>1){
   i++;}
   cout<<j+i<<endl;
   }}
   
   
   
  
  
  
  
  
 
  
  
   
 
 
               
 
 
 return 0;
}