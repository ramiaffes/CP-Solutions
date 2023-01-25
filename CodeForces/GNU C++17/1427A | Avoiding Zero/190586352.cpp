#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    int n;
    cin>>t;
    
    
    while(t--){bool test1=true;
    bool test2=true;
  cin>>n;
  vector<int>vect(n);
  for (int i(0);i<n;i++){
   cin>>vect[i];}
  sort(vect.begin(),vect.end());
  for(int k(0);k<n;k++){
   int som1=0;
  for(int i(0);i<=k;i++){
   som1+=vect[i];}
   if (som1==0){
    
    test1=false;
    break;}
   
  
  
  }
 if(test1==false){
 reverse(vect.begin(),vect.end());
 for(int k(0);k<n;k++){
   int som2=0;
  for(int i(0);i<=k;i++){
   som2+=vect[i];
   }
   if (som2==0){
    test2=false;
    break;}
   
  
  
  }}
 if (test1==true){
  cout<<"YES"<<endl;
  sort(vect.begin(),vect.end());
  for(int i(0);i<n;i++){
   cout<<vect[i]<<" ";}
  cout<<endl;
  }
 else if (test2==true){
  cout<<"YES"<<endl;
  for(int i(0);i<n;i++){
   cout<<vect[i]<<" ";}
  cout<<endl;
  }
 else{
  cout<<"NO"<<endl;
  }
  }
    
    
   
    
    
    
    return 0;
}