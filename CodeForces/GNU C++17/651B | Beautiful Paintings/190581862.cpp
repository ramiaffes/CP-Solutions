#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 long long int n,result;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 result=0;
 long long int som=1;
 long long int som1=0;
 sort(vect.begin(),vect.end());
 vector<long long int>vect1(2);
 for(long long int i(0);i<(n-1);i++){
  if(vect[i]==vect[i+1]){
   som++;}
  else{
   vect1.push_back(som);
   som=1;}}
 if(vect[n-1]!=vect[n-2]){
  vect1.push_back(1);}
 else{
  vect1.push_back(som);
  }
  
 
 sort(vect1.begin(),vect1.end());
 long long int r=vect1.end()-vect1.begin();
 for(long long int i(r-2);i>=0;i--){
   result+=vect1[i];}
  
 cout<<result<<endl;
 
 
 
   
   
  
    return 0;
}