#include <bits/stdc++.h>
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int main() {
 fast;
    int t;
    int n;
    string ph;
    cin>>t;
    while(t--){
  cin>>n;
  if(n==1){
   cout<<-1<<endl;}
  else if(n%3==0){
   string res1(n-1,'2');
   string res2(1,'3');
   ph=res1+res2;
   cout<<ph<<endl;
  }
  else if(n%3==1){
   string res1(n-2,'2');
   string res2(2,'3');
   ph=res1+res2;
   cout<<ph<<endl;
   }
  else{
   string res1(n-1,'2');
   string res2(1,'3');
   ph=res1+res2;
   cout<<ph<<endl;
   }
    
    
   
    
}
    
    return 0;
}