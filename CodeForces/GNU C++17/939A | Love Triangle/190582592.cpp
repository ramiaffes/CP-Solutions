#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
bool is(long long int i){
 return (i%2==0);}
int main() {
 fast;
 
  long long int n;
   cin>>n;
   vector<long long int>vect(n);
   for(long long int i(0);i<n;i++){
    cin>>vect[i];}
   bool test=false;
   if(n==2){
    cout<<"NO"<<endl;}
   else{
   for(long long int i(0);i<n;i++){
    test=(vect[vect[vect[i]-1]-1]==(i+1));
    if(test==true){break;}}
   cout<<(test? "YES":"NO")<<endl;
   }
   
   
  
  
    return 0;
}