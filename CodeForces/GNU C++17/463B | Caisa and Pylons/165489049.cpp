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
 long long int n,s,x,y;
 cin>>n;
 vector<long long int>vect(n);
 for(long long int i(0);i<n;i++)cin>>vect[i];
 long long int som1=0;
 som1+=vect[0];
 for(long long int i(0);i<(n-1);i++){
  som+=(vect[i]-vect[i+1]);
  if(som<=0){som1+=abs(som);som=0;}
  }
 cout<<som1<<endl;
 
 
 
 
 
  
  
 
 
 
 
 
  
 
 
 
    
    
return 0;}