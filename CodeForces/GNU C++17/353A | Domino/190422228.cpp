#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e5+5;
map<pair<long long int ,long long int>,long long int>dist;
int main()
{
 fast;
 long long int a,n,b,c,d;
 cin>>n;
 vector<pair<long long int,long long int>>vect(n);
 long long int som1=0;
 long long int som2=0;
 bool test=false;
 for(long long int i(0);i<n;i++){
  cin>>a>>b;
  vect[i]=make_pair(a,b);
  if((a%2!=b%2)){test=true;}
  som1+=a;som2+=b;}
 if((som1%2==0)and(som2%2==0)){
  cout<<0<<endl;}
 else if((som1%2==1)and(som2%2==1)){
  if(test==true){
   cout<<1<<endl;}
  else cout<<-1<<endl;}
 else if ((som1%2!=som2%2)){
  cout<<-1<<endl;
  }
 
 
 
 
 
 
 
 
 
 
 
 
  
 
 
 
 
 
return 0;}