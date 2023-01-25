#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
 long long int t;
 long long int n;
 
 cin>>t;
 while(t--){
 long long int som1(0);
 long long int som2(0);
 cin>>n;
 vector<int>vect(n);
 for(int i(0);i<n;i++){
  cin>>vect[i];}
 auto it=find(vect.begin(),vect.end(),1);
 int tab[]={1};
 auto ik=find_end(vect.begin(),vect.end(),tab,tab+1);
 for(auto ir=it;ir<ik;ir++){
  if(*(ir)==0){
   som2++;}}
 cout<<som2<<endl;}
 
 
  
  
   
  
  
  
 
 
  
 
 
 
    
    
 
    
   
    
    
    return 0;
}