#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
typedef  vector <long long int> vecteur ;
 int num(char cr){
 return (int)cr-48;} 
int main()
{
 fast;
 long long int t;
 long long int n;
 
 cin>>t;
 while(t--){
  cin>>n;
  vecteur v(n);
  for(long long int i(0);i<n;i++){
   cin>>v[i];}
   if(v[0]+v[1]<=v[n-1]){
    cout<<1<<" "<<2<<" "<<n<<endl;}
   else{
    cout<<-1<<endl;}
  }
 
 
  
 
        
 return 0;
}