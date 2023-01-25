#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
 fast; 
 long long int t,n;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int i=0;
 long long int j=n-1;
 long long int som1=0;
 long long int som2=0;
 long long int num1=0;
 long long int num2=0;
 while(i<j){
  if(som1==som2){
   som1+=vect[i];
   som2+=vect[j];
   num1++;
   num2++;
   i++;
   j--;}
 else if(som1<som2){
  som1+=vect[i];
  num1++;
  i++;
  }
 else{
  som2+=vect[j];
  num2++;
  j--;}
  }
  if(i==j){
 if(som1==som2){
  num1++;}
 else if(som1>som2)num2++;
 else num1++;}
 
 cout<<num1<<" "<<num2<<endl;
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}