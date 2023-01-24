#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,set<char>>adj;
map<char,bool>vis;
long long int som=0;
map<pair<char,char>,long long int>val;
map<char,long long int>dist1;
map<char,long long int>dist2;
 
int main()
{
 fast; 
 long long int n,k;
 cin>>n>>k;
 long long int p=1;
 long long int som=0;
 long long int som1=0;
 if(k==1)cout<<n<<endl;
 else{
 while(p<n){
  som1++;
  p*=2;
  }
 if(p>n){p/=2;som1--;}
 for(long long int i(0);i<=som1;i++){
  som^=p;
  p/=2;}
 cout<<som<<endl;
}
 
 
 
  
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
   
  
 
 
 
 
 
   
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
  
  
  
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
 
return 0;}