#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
bool is_perfect_cube(long long int n) {
    long long int root(llround(cbrtl(n)));
    return n == root * root * root;
}
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  bool test=false;
  for(long long int i(1);i<=cbrtl(n/2);i++){
   test=is_perfect_cube(n-i*i*i);
   if(test==true)break;
   }
  cout<<(test? "yes":"no")<<endl;
  
   
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}