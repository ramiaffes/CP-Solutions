#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 
int main()
{
 fast; 
 long long int  n;
 cin>>n;
 bool test=false;
 long long int num=81;
 vector<long long int>vect;
 long long int i=min(n-1,num);
 while(i>=0){
  long long int som=0;
  long long int val=n-i;
  while((val)!=0){
   som+=val%10;
   val/=10;}
  if(som==(i)){
   test=true;
   vect.push_back((n-i));}
  i--;}
 if(test==false){
  cout<<0<<endl;}
 else{
  cout<<vect.size()<<endl;
  for(long long int i(0);i<vect.size();i++)cout<<vect[i]<<" ";
  
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}