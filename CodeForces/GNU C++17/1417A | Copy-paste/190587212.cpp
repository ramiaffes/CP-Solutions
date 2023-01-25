#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
bool comp(pair<int,int>t,pair<int,int> x){
 return t.second<=x.second;}
 
int main()
{
 
 fast; 
 long long int t;
 cin>>t;
 
 while(t--){
  long long int n;
  long long int k;
  long long int som(0);
  cin>>n>>k;
  vecteur vect(n);
  for (int i(0);i<n;i++){
   cin>>vect[i];}
   sort(vect.begin(),vect.end());
   for (int i(1);i<n;i++){
    som+=(k-vect[i])/vect[0];}
   cout<<som<<endl;}
   
  
 
 
 
 return 0;
}