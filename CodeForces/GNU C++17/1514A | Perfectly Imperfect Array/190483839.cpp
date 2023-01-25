#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  bool test=false;
  vector<long long int>vect(n);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   if(!( isPerfectSquare(vect[i]))){
    test=true;}
   }
  if(test==true){
   cout<<"YES"<<endl;}
  else{
   cout<<"NO"<<endl;}
  
 
 
 
}
 
 
 
 
  
 
 
 
 
 
 
return 0;}