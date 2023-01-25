#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int n;
 cin>>n;
 vector<long long int>vect(n);
 vector<long long int>vect1(n);
 vector<long long int>result(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++)cin>>vect1[i];
 for(long long int i(0);i<n;i++){
  result[i]=(vect1[i]-vect[i]);
  }
 sort(result.begin(),result.end());
 long long int i=0;
 long long int j=n-1;
 long long int som=0;
 while(i<j){ 
  if((result[i]+result[j])>-1){
   j--;
   }
  if((result[i]+result[j])<=-1){
   som+=(j-i);
   i++;
   }
  
  }
 cout<<som<<endl;
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}