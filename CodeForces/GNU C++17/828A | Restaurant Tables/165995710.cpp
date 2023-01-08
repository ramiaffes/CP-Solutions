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
 long long int n,a,b;
 string s;
 cin>>n>>a>>b;
 vector<long long int>vect(n);
 long long int val=0;
 long long int som=0;
 for(long long int i(0);i<n;i++)cin>>vect[i];
 for(long long int i(0);i<n;i++){
  if(vect[i]==2){
   if(b==0){som+=2;}
   else b--;}
  else{
   if(((a==0)and(val==0))and(b==0)){
    som++;
    }
   else if(a!=0)a--;
   else if(b!=0){b--;val++;}
   else val--;}
  }
 cout<<som<<endl; 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}