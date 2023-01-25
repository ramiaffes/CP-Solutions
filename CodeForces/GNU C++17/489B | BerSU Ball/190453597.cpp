#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const long long int N=1e4;
int main()
{
 fast; 
 long long int n,m;
 cin>>n;
 map<long long int,long long int>adj;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++){
  cin>>vect[i];}
 
 cin>>m;
 vector<long long int>vect1(m);
 for(long long int i(0);i<m;i++){
  cin>>vect1[i];}
 sort(vect.begin(),vect.end());
 sort(vect1.begin(),vect1.end());
 long long int i=0;
 long long int j=0;
 long long int som=0;
 while((i<n)and(j<m)){
  if((vect1[j]==vect[i]-1)or(vect1[j]==vect[i])or(vect1[j]==vect[i]+1)){i++;j++;som++;}
  else if(vect1[j]>vect[i]+1){i++;}
  else {j++;}
  }
 cout<<som<<endl;
 
 
  
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}