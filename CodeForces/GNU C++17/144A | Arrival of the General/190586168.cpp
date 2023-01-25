#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    long long int n;
    cin>>n;
    vector<long long int> vect(n);
    for(int i(0);i<n;i++){
  cin>>vect[i];}
 auto it=max_element(vect.begin(),vect.end());
 reverse(vect.begin(),vect.end());
 auto comp=min_element(vect.begin(),vect.end());
 int r=vect.end()-comp;
 reverse(vect.begin(),vect.end());
 comp=vect.begin()+r-1;
 if(comp==it){
  cout<<0<<endl;}
 else if(comp>it){
  cout<<(vect.end()-comp-1+it-vect.begin());}
 else{
  cout<<(vect.end()-comp-1+it-vect.begin()-1);}
 
 
 
 
   
   
  
  
   
    
    
 
    
   
    
    
    return 0;
}