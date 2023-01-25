#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool sortbysecasc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second<b.second;
}
bool is_different(vector<long long int >vect,long long int n){
 long long int i=0;
 if(n==1){
  return true;}
 bool test=true;
 while ((test==true) and (i<n-1)){
  test=(vect[i]!=vect[i+1]);
  i++;}
  return test;}
int main() {
 fast;
    long long int n;
    cin>>n;
    vector<long long int>vect(n);
    
    for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 sort(vect.begin(),vect.end());
 long long int result=0;
 while((!(is_different(vect,n)))and(n!=1)){
 long long int i(0);
 while((i<n-1)){
  long long int som=0;
  while ((vect[i]==vect[i+1])and(i<n)){
   som++;
   i++;}
  if(som!=0){
  for(long long int r(i-som+1);r<(i+1);r++){
   vect[r]+=1;
   }}
  
  
  
  
  result+=som;
  i+=1;}
  }
  
 cout<<result<<endl;
  
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}