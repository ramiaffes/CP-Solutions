#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int n;
 cin>>n;
 long long int som=0;
 
 vector<int>vect(n);
 
 for(int i(0);i<n;i++){
  cin>>vect[i];
  som+=vect[i];}
 long long int k=*(max_element(vect.begin(),vect.end()));
 while(n*k<=2*som){
  k++;}
 cout<<k<<endl;
 
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}