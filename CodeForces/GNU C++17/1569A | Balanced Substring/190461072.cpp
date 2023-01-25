#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int n,t;
 string s;
 cin>>t;
 while(t--){
  cin>>n;
  cin>>s;
  long long int som1=0;
  long long int som2=0;
  long long int i=0;
  long long int j=0;
  for(i=0;i<n;i++){
   som1=0;som2=0;
   for(j=i;j<n;j++){
    som1=0;som2=0;
    for(long long int d(i);d<=j;d++){
     if(s[d]=='a')som1++;
     else som2++;}
    if(som1==som2)break;}if(som1==som2)break;
   }
 if((i==n)or(j==n) )cout<<-1<<" "<<-1<<endl;
 else cout<<(i+1)<<" "<<(j+1)<<endl;
  
 
  
  
   
  }
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}