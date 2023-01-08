#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4; 
map<long long int,long long int>adj;
long long int ans=-1e5;
 
long long int som=0;
int main()
{
 fast; 
 long long int n,k,t;
 cin>>t;
 while(t--){
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 if(vect[n-1]<vect[n-2]){
 cout<<-1<<endl;}
 else if((vect[n-1]>=0)and(vect[n-2]>=0)){
 cout<<(n-2)<<endl;
 for(long long int i(0);i<(n-2);i++){
 cout<<(i+1)<<" "<<(n-1)<<" "<<n<<endl;}
 }
 else if((vect[n-1]>=0)and(vect[n-2]<=0)){
 cout<<(n-2)<<endl;
 for(long long int i(0);i<(n-2);i++){
 cout<<(i+1)<<" "<<(n-1)<<" "<<n<<endl;}
 }
 else{
 if(is_sorted(vect.begin(),vect.end())){
 cout<<0<<endl;}
 else{
 cout<<-1<<endl;}}
 }
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}