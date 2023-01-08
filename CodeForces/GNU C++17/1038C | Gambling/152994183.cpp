#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
long long int ans=0;
void func(vector<long long int>vect){}
int main()
{
 fast;
 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++)cin>>vect1[i];
 sort(vect.begin(),vect.end());
 sort(vect1.begin(),vect1.end());
 long long int val=n-1;
 long long int val1=n-1;
 long long int res1=0;
 long long int res2=0;
 int test=0;
 while((val1>=0)or(val>=0)){
  long long int ans=0;
  if(val1>=0){
   ans=max(ans,vect1[val1]);}
 if(val>=0){
   ans=max(ans,vect[val]);}
 if(test==0){
  if(val>=0){
   if(ans==vect[val]){
    res1+=vect[val];
    val--;}
   else{
    val1--;
    }}
  else{
   val1--;}
  }
else{
 if(val1>=0){
   if(ans==vect1[val1]){
    res2+=vect1[val1];
    val1--;}
   else{
    val--;
    }}
  else{
   val--;}}
  test=1-test;
  }
cout<<(res1-res2)<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}