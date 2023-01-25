#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
 
int main()
{
 fast; 
 long long int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  long long int n0=0;
  long long int n1=0;
  long long int n2=0;
  vector<long long int>vect(n);
  vector<long long int>vect1(3);
  for(long long int i(0);i<n;i++){
   cin>>vect[i];
   if(vect[i]%3==0) n0++;
   else if(vect[i]%3==1)n1++;
   else n2++;
  }
  vect1[0]=n0;
  vect1[1]=n1;
  vect1[2]=n2;
  long long int som=0;
  while (*min_element(vect1.begin(), vect1.end()) != n / 3) {
      for (long long int i = 0; i < 3; i++) {
          if (vect1[i] > n / 3) {
              som++;
              vect1[i]--;
              vect1[(i + 1) % 3]++;
          }
      }
  }
  
 cout<<som<<endl; 
  
  
  
  
 
   
  
  
 }
 
 
  
  
  
  
  
 
  
 
 
 
 return 0;
}