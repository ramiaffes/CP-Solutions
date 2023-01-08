#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
bool isprime(long long int num){
    bool flag=true;
    for(int i = 2; i*i<=num; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;}
int main()
{
 fast; 
 long long int n,m,h,t;
 cin>>t;
 while(t--){
 cin>>n;
 if(n==1){
  cout<<"FastestFinger"<<endl;}
 else if(n==2){
     cout<<"Ashishgup"<<endl;
 }
 else if(n%2==1){
  cout<<"Ashishgup"<<endl;}
 else{
     long long int som=0;
     long long int n1=n;
  while(n1%2==0){
      som++;
   n1/=2;}
  if(n1==1){
      if(som==1){
          cout<<"Ashishgup"<<endl;
      }
      else{
          cout<<"FastestFinger"<<endl;
      }
  }
  else{
      if(som==1){
          if(isprime(n1)){
              cout<<"FastestFinger"<<endl;
          }
          else{
              cout<<"Ashishgup"<<endl;
          }
      }
      else{
          cout<<"Ashishgup"<<endl;
      }
          
      }
  }
 
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}