#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast; 
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  if((n/2)%2!=0){
   cout<<"No"<<endl;
   }
  else{
   cout<<"YES"<<endl;
   for (int i(1);i<(n/2);i++){
    cout<<2*i<<" ";}
   cout<<n+(n/2)<<" ";
    for (int i(1);i<n/2+1;i++){
    cout<<2*i+1<<" ";}
  cout<<endl; }
 }
 
 
 
 return 0;
}