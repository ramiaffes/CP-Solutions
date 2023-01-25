#include <bits/stdc++.h>
using namespace std;
#define  fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const  long long int N=1e4;
map<char,bool>vis;
map<long long int ,long long int >adj;
int main()
{
fast;
long long int n;
cin>>n;
vector<long long int>vect(n);
for(long long int i(0);i<n;i++){cin>>vect[i];}
vector<long long int>res;
long long int j=n-1;
long long int val=vect[0];
long long int som=0;
while(j>=0){
 if(vect[j]<=val){
  val=vect[j];
  som++;
  j--;}
 else{break;}
  }
if(j<0){
 if(vect[0]==vect[n-1]){
  cout<<0<<endl;
  }
 else{
  cout<<som<<endl;}}
else if(is_sorted(vect.begin(),vect.begin()+j+1)){
 cout<<som<<endl;}
else{cout<<-1<<endl;}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
 
  
 
 
 
 
 
return 0;}