#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
long long int som=0; 
int main()
{
 fast; 
 long long int n,k;
 string s;
 cin>>n;
 vector<long long int >vect(n);
 vector<long long int>res1;
 vector<long long int>res2;
 long long int som1=0;
 long long int som2=0;
 for(long long int i(0);i<n;i++){
  cin>>vect[i];
  if(vect[i]>0){
   res1.push_back(vect[i]);
   som1+=vect[i];}
  else{
   res2.push_back(-vect[i]);
   som2+=-vect[i];}}
 if(som1>som2){
  cout<<"first"<<endl;}
 else if(som1==som2){
  if(res1<res2)cout<<"second"<<endl;
  else if(res2<res1) cout<<"first"<<endl;
  else {if(vect[n-1]<0)cout<<"second"<<endl;
   else cout<<"first"<<endl;}
 
}
else{
 cout<<"second"<<endl;}
 
 
 
    
return 0;}