#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int n;
 cin>>n;
 vector<int> vect(n);
 long long int max(1);
 long long int som(1);
 cin>>vect[0];
 for (int i(1);i<n;i++){
    cin>>vect[i];
   if(vect[i-1]<vect[i]){
   som++;
   }
  else{
   if(som>max){
    max=som;}
    som=1;
    }}
 if(som>max){
  max=som;}
 cout<<max<<endl;
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}